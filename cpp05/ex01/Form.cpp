/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:05:03 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/14 14:26:48 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form() : _name("blank paper"), _signed(false), _signature_grade(150), _execution_grade(150)
{
    std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string name, int sig_grade, int exec_grade) :
 _name(name), _signed(false), _signature_grade(sig_grade), _execution_grade(exec_grade)
{
    if (sig_grade < 1 || exec_grade < 1)
        throw hightex;
    else if (sig_grade > 150 || exec_grade > 150)
        throw lowex;
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(Form const & src) :
_name(src.getName()), _signed(src.getSigned()),
 _signature_grade(src.getSignatureGrade()), _execution_grade(src.getExecutionGrade())
{
    *this = src;
    std::cout << "Copy Form constructor called" << std::endl;

    return ;
}

Form& Form::operator=(Form const & var)
{
    if (this != &var)
    {
        this->_signed = var.getSigned();
    }
    return *this;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream & ostream, Form const & instance)
{
    if (instance.getSigned() == true)
    {
        ostream << "Form : " << instance.getName() << std::endl << "Grade required for signature : " 
        << instance.getSignatureGrade() << ", for execution : " << instance.getExecutionGrade() << std::endl
        << "The form is signed";
    }
    else
    {
        ostream << "Form : " << instance.getName() << std::endl << "Grade required for signature : " 
        << instance.getSignatureGrade() << ", for execution : " << instance.getExecutionGrade() << std::endl
        << "The form is unsigned";
    }
    return (ostream);
}

const std::string Form::getName() const
{
    return(this->_name);
}

bool Form::getSigned() const
{
    return(this->_signed);
}

int Form::getSignatureGrade() const
{
    return(this->_signature_grade);
}

int Form::getExecutionGrade() const
{
    return(this->_execution_grade);
}

bool Form::beSigned(Bureaucrat const & worker)
{
    if (worker.getGrade() > this->_signature_grade)
    {
        throw lowex;
        std::cout << worker.getName() << " couldn't signed " << this->_name << "because his grade is invalid" << std::endl;
        return (false);
    }
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
