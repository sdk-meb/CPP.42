/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:26:12 by sdk-meb           #+#    #+#             */
/*   Updated: 2022/09/28 17:26:20 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream>

int	main(int _argc, char **argv)
{
	int		index, n_str = 0;

	if (_argc == 1)
		return std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0;
	while (++n_str <_argc)
	{
		index = -1;
		do{
			argv[n_str][index] = toupper(argv[n_str][index]);
		} while (argv[n_str][++index]);
		std::cout << argv[n_str];
	}
	std::cout << std::endl;
	return 0;
}
