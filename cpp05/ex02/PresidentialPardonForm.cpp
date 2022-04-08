/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:44:09 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/08 10:44:09 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 72, 45, target)  
{
    std::cout << "Constructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src)
{
    std::cout << "Copy constructor PresidentialPardonForm" << std::endl;
    *this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & var)
{
    if (this != &var)
    {
        this->_signed = var.getSigned();
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{  
    std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}