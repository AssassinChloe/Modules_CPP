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

Contact	get_info()
{
	int i;
	std::string buff;
	Contact		tmp;
	std::string tab[5] = 
	{
		"Firstname : ",
		"Lastname : ",
		"Nickname : ",
		"Number : ",
		"Darkest Secret : "
	};

	i = 0;
	std::getline(std::cin, buff);
		while (i < 5)
	{
		std::cout << tab[i];
		std::getline(std::cin, buff);
		if (buff.size() == 0)
			std::cout << "The field can't be empty" << std::endl;
		else
		{
			switch (i)
			{
				case 0:
					tmp.set_fname(buff);
					break;
				case 1:
					tmp.set_lname(buff);
					break;
				case 2:
					tmp.set_nname(buff);
					break;
				case 3:
					tmp.set_nb(buff);
					break;
				case 4:
					tmp.set_sec(buff);
					break;
				default :
					break;
			}
			i++;
		}
	}
	return (tmp);
}

void	ft_search(int i, PhoneBook book)
{
	int index;
	std::string	buff;

	index = 0;
	std::cout << std::setw(11) << "INDEX|" << std::setw(11) << "LASTNAME|" 
	<< std::setw(11) << "FIRSTNAME|" << std::setw(11) << "NICKNAME|" << std::endl << std::endl;
	while (index < i)
	{
		book.search((index + 1), book.get_contact(index));
		index++;
	}
	std::getline(std::cin, buff);
	std::cout << "Please enter an index between 1 and " << i << std::endl;
	std::getline(std::cin, buff);
	index = atoi(buff.c_str());
	if (index <= 0 || index > i)
		std::cout << "Error, wrong index. Ending search."<< std::endl;
	else
		book.print_contact(book.get_contact(index - 1));
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
				ft_search(i, book);
			else
				std::cout << "Your Phonebook is empty, please ADD some contact first" << std::endl;
        }
        else if (buff == "ADD")
        {
			if (i < 8)
			{
				book.set_contact(i, get_info());
				i++;
			}
			else if (i == 8)
			{
				book.set_contact(j, get_info());
				j++;
				if (j == 8)
					j = 0;
			}
        }
		else
            std::cout << "Please use ADD, SEARCH or EXIT only" << std::endl;
    }
}
