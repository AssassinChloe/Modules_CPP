/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:44:09 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/08 10:44:09 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45, target)  
{
    std::cout << "Constructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src)
{
    std::cout << "Copy constructor RobotomyRequestForm" << std::endl;
    *this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & var)
{
    if (this != &var)
    {
        this->_signed = var.getSigned();
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    srand(time(NULL));
    int nb = rand() % 10;
    std::cout << "Dzzzdzzzzzzii dzzzziii ** You hear a lot of drilling noises ** Dzzzzzzziiii ziiiiidzidzi dzz" << std::endl;
    if ((nb % 2) == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomization of " << this->_target << " failure" << std::endl;
}