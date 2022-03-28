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
# include <cstdlib>

#include "Contact.hpp"

class PhoneBook 
{

	public:
		
		PhoneBook(void);
		~PhoneBook(void);

		void	search(int index, Contact contact) const;

		Contact	get_contact(int i) const;
		void	search(int i)  const;
		void	set_contact(int i);

	private :
	 	Contact	get_info() const;
		void	print_tab(int i) const;
		void	print_contact(Contact contact) const;
		Contact _list[8];
};

#endif
