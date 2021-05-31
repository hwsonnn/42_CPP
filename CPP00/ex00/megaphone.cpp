#include <iostream>

void	ft_upper(char *s)
{
	for (int i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		std::cout << s[i];
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
			ft_upper(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}