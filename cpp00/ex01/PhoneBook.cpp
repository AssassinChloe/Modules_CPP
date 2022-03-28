/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:02:56 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:02:59 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

Contact	PhoneBook::get_contact(int i) const
{
	return (this->_list[i]);
}

void	PhoneBook::set_contact(int i)
{
	this->_list[i] = get_info();
}

void	PhoneBook::print_tab(int i) const 
{
	int index;
	
	index = 0;
	std::cout << std::setw(11) << "INDEX|" << std::setw(11) << "LASTNAME|" 
	<< std::setw(11) << "FIRSTNAME|" << std::setw(11) << "NICKNAME|" << std::endl << std::endl;
	while (index < i)
	{
		std::cout << std::setw(10) << (index + 1) << "|";
		if (this->_list[index].get_fname(this->_list[index]).size() > 10)	
			std::cout << this->_list[index].get_fname(this->_list[index]).substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->_list[index].get_fname(this->_list[index]) << "|";
		if (this->_list[index].get_lname(this->_list[index]).size() > 10)	
			std::cout << this->_list[index].get_lname(this->_list[index]).substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->_list[index].get_lname(this->_list[index]) << "|";
		if (this->_list[index].get_nname(this->_list[index]).size() > 10)	
			std::cout << this->_list[index].get_nname(this->_list[index]).substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::setw(10) << this->_list[index].get_nname(this->_list[index]) << "|" << std::endl;
		index++;
	}
}

void	PhoneBook::search(int i) const
{
	std::string	buff;
	int	index;

	this->print_tab(i);
	std::getline(std::cin, buff);
	std::cout << "Please enter an index between 1 and " << i << std::endl;
	std::getline(std::cin, buff);
	index = atoi(buff.c_str());
	if (index <= 0 || index > i)
		std::cout << "Error, wrong index. Ending search."<< std::endl;
	else
		this->print_contact(this->_list[index - 1]);
}

void	PhoneBook::print_contact(Contact contact) const
{
	std::cout << "Firstname : " << contact.get_fname(contact) << std::endl;
	std::cout << "Lastname  : " << contact.get_lname(contact) << std::endl;
	std::cout << "Nickname  : " << contact.get_nname(contact) << std::endl;
	std::cout << "Number    : " << contact.get_nb(contact) << std::endl;
	std::cout << "Secret    : " << contact.get_sec(contact) << std::endl;
}

 Contact	PhoneBook::get_info() const
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
