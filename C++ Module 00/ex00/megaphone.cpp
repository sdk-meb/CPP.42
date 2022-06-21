# include<iostream>

int	main(int _argc, char **argv)
{
	int		index = -1, n_str = 0;

	if (_argc == 1)
		return std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0;
	while (++n_str <_argc)
	{
		do{
			if (argv[n_str][index] >= 97 && argv[n_str][index] <= 122)
				argv[n_str][index] -= 32;
		} while (argv[n_str][++index]);
		std::cout << argv[n_str];
		index = -1;
	}
	std::cout << std::endl;
	return 0;
}
