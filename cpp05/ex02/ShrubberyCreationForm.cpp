/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:44:36 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/08 10:44:36 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137, (target += "_shrubbery"))
{
    std::cout << "Constructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src)
{
    std::cout << "Copy constructor ShrubberyCreationForm" << std::endl;
    *this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & var)
{
    if (this != &var)
    {
        this->_signed = var.getSigned();
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream ofs(this->_target.c_str());
    if (!ofs)
    {
        std::cout << "Error opening " << this->_target << "_shrubbery file";
        return ;
    }
    ofs << "               ss                                            " << std::endl;
    ofs << "               ss                                            " << std::endl;
    ofs << "               ss                                            " << std::endl;
    ofs << "              ssss                                           " << std::endl;
    ofs << "              ssss                                           " << std::endl;
    ofs << "             sssssss                                         " << std::endl;
    ofs << "             sssssss                                         " << std::endl;
    ofs << "           sssssssssss                                       " << std::endl;
    ofs << "           sssssssssss                                       " << std::endl;
    ofs << "         sssssssssssssss                                     " << std::endl;
    ofs << "         sssssssssssssss                             t       " << std::endl;
    ofs << "       ssssssssssssssssss                              t   t " << std::endl;
    ofs << "       ssssssssssssssssss                         t       t  " << std::endl;
    ofs << "     sssssssssssssssssssssss                       t     t   " << std::endl;
    ofs << "     sssssssssssssssssssssss      t    t      t     tt  t    " << std::endl;
    ofs << "   sssssssssssssssssssssssssss     tt    t    t      tt      " << std::endl;
    ofs << "   sssssssssssssssssssssssssss      t     t  t        tt  t  " << std::endl;
    ofs << "  ssssssssssssssssssssssssssssss   tt      tt           tt   " << std::endl;
    ofs << "  ssssssssssssssssssssssssssssss    t  ttt      t       t    " << std::endl;
    ofs << "ssssssssssssssssssssssssssssssssss   tttt        t    tt     " << std::endl;
    ofs << "ssssssssssssssssssssssssssssssssss       t        t tt   t tt" << std::endl;
    ofs << "              uuuu                         t       t     tt  " << std::endl;
    ofs << "              uuuu                          tttt  tt   t     " << std::endl;
    ofs << "              uuuu                              ttttt  t     " << std::endl;
    ofs << "              uuuu                                tt t       " << std::endl;
    ofs << "              uuuu                                tt         " << std::endl;
    ofs << "              uuuu                                tt         " << std::endl;
    ofs << "              uuuu                                tt         " << std::endl;
    ofs << "              uuuu                                tt         " << std::endl;
    ofs << "              uuuu                                tt         " << std::endl;
    ofs.close();
}