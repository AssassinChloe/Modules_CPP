/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:45:13 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/08 10:45:13 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <iostream>
# include <string>
# include "Form.hpp"
# define ERROR "\033[1;31m ERROR : \033[0m"

class Form;

class Bureaucrat
{
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char *what() const throw()
            {
                return ("Grade too hight");
            }
    } hightex;

    class GradeTooLowException : public std::exception
    {
        public :
            virtual const char *what() const throw()
            {
                return ("Grade too low");
            }
    } lowex;

    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        virtual ~Bureaucrat();

        Bureaucrat& operator=(Bureaucrat const & var);
        std::string const getName() const;
        int getGrade() const;
        void promotion();
        void demotion();
        void signForm(Form & form);
    
    private:
        Bureaucrat();
        std::string const   _name;
        int                 _grade;    
};

std::ostream & operator<<(std::ostream & ostream, Bureaucrat const & instance);

#endif
