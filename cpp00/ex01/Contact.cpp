/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:02:23 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:02:30 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() 
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

std::string Contact::get_fname(Contact contact) const
{
    return (contact._fname);
}

std::string Contact::get_lname(Contact contact) const
{
    return (contact._lname);
}

std::string Contact::get_nname(Contact contact) const
{
    return (contact._nname);
}

std::string Contact::get_nb(Contact contact) const
{
    return (contact._nb);
}

std::string Contact::get_sec(Contact contact) const
{
    return (contact._sec);
}

void Contact::set_fname(std::string firstname)
{
    this->_fname = firstname;
}
void Contact::set_lname(std::string lastname)
{
    this->_lname = lastname;
}
void Contact::set_nname(std::string nickname)
{
    this->_nname = nickname;
}
void Contact::set_nb(std::string number)
{
    this->_nb = number;
}
void Contact::set_sec(std::string secret)
{
    this->_sec = secret;
}
