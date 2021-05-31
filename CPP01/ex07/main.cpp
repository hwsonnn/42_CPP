#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Worng argument error!" << std::endl;
		return (-1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream fin(filename);
	std::ofstream fout(filename + ".replace");

	std::string				str;
	std::string::size_type	start;

	if (!fin.is_open() || !fout.is_open())
	{
		std::cout << "File open error" << std::endl;
		return (-1);
	}
	while (std::getline(fin, str))
	{
		start = 0;
		while (1)
		{
			if ((start = str.find(s1, start)) == std::string::npos)
				break;
			str.replace(start, s1.length(), s2);
			//start 위치를 조정 안해도 되는지?
		}
		fout << str;
		if (!fin.eof())
			fout << std::endl;
	}
	fin.close();
	fout.close();
	return (0);
}