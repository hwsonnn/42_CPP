#include "mutantstack.hpp"
#include <iostream>
#include <ctime>
#include <list>

int main(void)
{
	srand(time(NULL));
	MutantStack<int> mstack;
		
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "now top : " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "after pop, size =" << mstack.size() << std::endl;
	std::cout << "top : " << mstack.top() << std::endl;
	
	for (int i = 0; i < 10; i++)
		mstack.push(rand() % 100);
	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);
	// mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
	  std::cout << *it << " ";
	  ++it;
	}
	std::cout << std::endl;


	std::stack<int> s(mstack);

	std::cout << "now copied to std::stack<int>!\n";
	std::cout << s.size() << std::endl;
	std::cout << s.top() << std::endl;

	return 0;
}

// stack<int> st;

// stack<stack, vector<string>> st; //내부 컨테이너 구조 바꾸기, default는 deque

// // deque를 복사하여 stack을 생성
// deque<int> d1(5, 10);
// stack<int> s3(d1);