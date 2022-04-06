/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:05:07 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/06 17:38:15 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat ;

class Form
{
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char *what() const throw()
            {
                return ("Your grade is too hight");
            }
    } hightex;

    class GradeTooLowException : public std::exception
    {
        public :
            virtual const char *what() const throw()
            {
                return ("Your grade is too low");
            }
    } lowex;

    public:
        Form(std::string name, int sig_grade, int exec_grade);
        Form(Form const & src);
        virtual ~Form();

        Form& operator=(Form const & var);
        const std::string getName() const;
        bool getSigned() const;
        int getSignatureGrade() const;
        int getExecutionGrade() const;
        bool beSigned(Bureaucrat const & worker);
        
    private:
        Form();
        const std::string _name;
        bool        _signed;
        const int   _signature_grade;
        const int   _execution_grade;
        
};

std::ostream & operator<<(std::ostream & ostream, Form const & instance);

#endif
