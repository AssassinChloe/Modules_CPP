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

void	PhoneBook::set_contact(int i, Contact contact)
{
	this->_list[i] = contact;
}

void	PhoneBook::search(int index, Contact contact) const 
{
	std::cout << std::setw(10) << index << "|";
	if (contact.get_fname(contact).size() > 10)	
		std::cout << contact.get_fname(contact).substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << contact.get_fname(contact) << "|";
	if (contact.get_lname(contact).size() > 10)	
		std::cout << contact.get_lname(contact).substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << contact.get_lname(contact) << "|";
	if (contact.get_nname(contact).size() > 10)	
		std::cout << contact.get_nname(contact).substr(0, 9) << ".|" << std::endl;
	else
		std::cout << std::setw(10) << contact.get_nname(contact) << "|" << std::endl;
}

void	PhoneBook::print_contact(Contact contact) const
{
	std::cout << "Firstname : " << contact.get_fname(contact) << std::endl;
	std::cout << "Lastname  : " << contact.get_lname(contact) << std::endl;
	std::cout << "Nickname  : " << contact.get_nname(contact) << std::endl;
	std::cout << "Number    : " << contact.get_nb(contact) << std::endl;
	std::cout << "Secret    : " << contact.get_sec(contact) << std::endl;
}

 
