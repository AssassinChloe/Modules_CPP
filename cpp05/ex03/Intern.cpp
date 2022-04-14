/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:51:30 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/14 14:57:16 by cassassi         ###   ########.fr       */
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
    std::string _form_known[] = 
    {   "shrubbery creation", "robotomy request","presidential pardon"};
    AForm *((Intern::*tab[])(std::string const &)) =
    {
        &Intern::createShrubberyCreation,
        &Intern::createRobotomyRequest,
        &Intern::createPresidentialPardon,
    };
    for (int i = 0; i < 3; i++)
    {
        AForm *(Intern::*display)(std::string const &) = tab[i];
        if (name == _form_known[i])
            return ((this->*display)(target));
    }
    std::cout << "Unknown form, Intern can't create it." << std::endl;
    return (NULL);
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