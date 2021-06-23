#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

// 직렬화된 데이터를 나타내는 바이트의 시퀀스의 힙의 주소를 반환
void *serialize(void)
{
	srand(time(NULL));

	char *str = new char[20];
	for (int i = 0; i < 8; i++)
	{
		str[i] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 62];
	}
	int b = rand() % 100;
	*reinterpret_cast<int *>(str + 8) = b; //static_cast 불가
	for (int i = 12; i < 20; i++)
	{
		str[i] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 62];
	}
	return (static_cast<void *>(str));
}

// 내가 직렬화를 통해 만든 데이터를 역직렬화 Data structure로
// 그것은 힙에 할당한 요소와 같은 것을 포함하고 있을 것
Data *deserialize(void *raw)
{
	Data *data = new Data;
	data->s1 = std::string(static_cast<char *>(raw), 8); //string으로 형변환해서 substr 쓰려고 했는데 안됨 
	data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
	data->s2 = static_cast<char *>(raw) + 12;
	return (data);
}

int main(void)
{
	void *raw = serialize();
	Data *data = deserialize(raw);

	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;

	delete static_cast<char *>(raw);
	delete data;

	return (0);
}