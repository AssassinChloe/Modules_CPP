/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:05:03 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/07 14:26:03 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

AForm::AForm() : _name("blank paper"), _signed(false), _signature_grade(150), _execution_grade(150), _target("unknown")
{
    std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(std::string name, int sig_grade, int exec_grade, std::string target)
 : _name(name), _signed(false), _signature_grade(sig_grade), _execution_grade(exec_grade), _target(target) 
{
    std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(AForm const & src) :
_name(src.getName()), _signed(src.getSigned()),
 _signature_grade(src.getSignatureGrade()), _execution_grade(src.getExecutionGrade())
{
    *this = src;
    std::cout << "Copy AForm constructor called" << std::endl;

    return ;
}

AForm& AForm::operator=(AForm const & var)
{
    if (this != &var)
    {
        this->_signed = var.getSigned();
    }
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream & ostream, AForm const & instance)
{
    if (instance.getSigned() == true)
    {
        ostream << "Form : " << instance.getName() << std::endl << "Grade requierment for signature : " 
        << instance.getSignatureGrade() << std::endl << "Grade requierment for execution : " << instance.getExecutionGrade() << std::endl
        << instance.getName() << " is signed";
    }
    else
    {
        ostream << "Form : " << instance.getName() << std::endl << "Grade requierment for signature : " 
        << instance.getSignatureGrade() << std::endl << "Grade requierment for execution : " << instance.getExecutionGrade() << std::endl
        << instance.getName() << " is unsigned";
    }
    return (ostream);
}

const std::string AForm::getName() const
{
    return(this->_name);
}

bool AForm::getSigned() const
{
    return(this->_signed);
}

int AForm::getSignatureGrade() const
{
    return(this->_signature_grade);
}

int AForm::getExecutionGrade() const
{
    return(this->_execution_grade);
}

bool AForm::beSigned(Bureaucrat const & worker)
{
    if (worker.getGrade() > this->_signature_grade)
        throw worker.lowex;
    else
    {
        if (this->_signed == false)
        {
            this->_signed = true;
            return (true);
        }
        else
            return (false);
    }
}