/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:03:08 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:03:10 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>

#include "Contact.hpp"

class PhoneBook 
{

	public:
		
		PhoneBook(void);
		~PhoneBook(void);

		void	search(int index, Contact contact) const;
		void	print_contact(Contact contact) const;
		Contact	get_contact(int i) const;
		
		void	set_contact(int i, Contact contact);

	private :
	
		Contact _list[8];
};

#endif
