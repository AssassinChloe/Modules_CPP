/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:51:30 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/11 01:06:41 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
            
Intern::Intern()
{
    std::cout << "Constructor Intern" << std::endl;
}

Intern::Intern(Intern const & src)
{
    std::cout << "Copy constructor Intern" << std::endl;
    *this = src;
    return ;
}

Intern& Intern::operator=(Intern const & var)
{
    std::cout << "Assignation operator Intern" << std::endl;
    if (this == &var)
        return *this;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Destructor Intern" << std::endl;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string _form_known[] = 
    {   "shrubbery creation", "robotomy request","presidential pardon" };
    while (i < this->_nb_forms && _form_known[i] != name)
        i++;
    switch (i)
    {
        case 0:
            return (this->createShrubberyCreation(target));
            break;
        case 1:
            return (this->createRobotomyRequest(target));
            break;
        case 2:
            return (this->createPresidentialPardon(target));
            break;
        default:
            std::cout << "Unknown form, Intern can't create " << name << " form." << std::endl;
            return (NULL);
            break;
    }
}

AForm *Intern::createShrubberyCreation(std::string const &target)
{
    std::cout << "Intern create shrubbery creation form" << std::endl;
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::createRobotomyRequest(std::string const &target)
{
    std::cout << "Intern create robotomy request form" << std::endl;
    return (new RobotomyRequestForm(target));
}         
AForm *Intern::createPresidentialPardon(std::string const &target)
{
    std::cout << "Intern create presidential pardon form" << std::endl;
    return (new PresidentialPardonForm(target));
}