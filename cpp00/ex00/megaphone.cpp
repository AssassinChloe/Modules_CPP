/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:18:20 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/21 11:18:28 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				std::cout << (char)std::toupper(av[i][j]);
				j++;
			}
			i++;
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
