/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:51:22 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/14 14:57:53 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        virtual ~Intern();

        Intern& operator=(Intern const & var);
        AForm* makeForm(std::string name, std::string target);
    
    private:
        AForm *createShrubberyCreation(std::string const &target);
        AForm *createRobotomyRequest(std::string const &target);          
        AForm *createPresidentialPardon(std::string const &target);
        AForm *unkwownform(std::string const &target);
        static const int _nb_forms = 3;
};

#endif
