/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:03:26 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:03:29 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_banner()
{
	std::cout << "PPPPP   H    H  OOOOOO  N    N  EEEEEE    BBBBB   OOOOOO  OOOOOO  K    K" << std::endl;
	std::cout << "P    P  H    H  O    O  NN   N  E         B    B  O    O  O    O  K   K " << std::endl;
	std::cout << "P    P  H    H  O    O  N N  N  E         B    B  O    O  O    O  K  K  " << std::endl;
	std::cout << "PPPPP   HHHHHH  O    O  N  N N  EEEEEE    BBBBB   O    O  O    O  K K   " << std::endl;
	std::cout << "P       H    H  O    O  N  N N  E         B    B  O    O  O    O  K  K  " << std::endl;
	std::cout << "P       H    H  O    O  N   NN  E         B    B  O    O  O    O  K   K " << std::endl;
	std::cout << "P       H    H  OOOOOO  N    N  EEEEEE    BBBBB   OOOOOO  OOOOOO  K    K" << std::endl;
	std::cout << std::endl << "Please use ADD, SEARCH or EXIT" << std::endl;
}

int main(void)
{
	int			i;
	int			j;
    PhoneBook	book;
    std::string	buff;

	i = 0;
	j = 0;
	ft_banner();
    while (1)
    {
        std::cin >> buff;
        if (buff == "EXIT")
            return (0);
        else if (buff == "SEARCH")
        {
			if (i > 0)
				book.search(i);
			else
				std::cout << "Your Phonebook is empty, please ADD some contact first" << std::endl;
        }
        else if (buff == "ADD")
        {
			if (i < 8)
			{
				book.set_contact(i);
				i++;
			}
			else if (i == 8)
			{
				book.set_contact(j);
				j++;
				if (j == 8)
					j = 0;
			}
        }
		else
            std::cout << "Please use ADD, SEARCH or EXIT only" << std::endl;
    }
}
