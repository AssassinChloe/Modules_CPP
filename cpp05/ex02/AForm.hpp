/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:05:07 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/07 14:26:33 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

# include <iostream>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat ;

class AForm
{
    public:
        AForm(AForm const & src);
        virtual ~AForm();

        AForm& operator=(AForm const & var);
        const std::string getName() const;
        bool getSigned() const;
        int getSignatureGrade() const;
        int getExecutionGrade() const;
        bool beSigned(Bureaucrat const & worker);
        virtual void beExecuted(std::string target) = 0;
        
    private:
        AForm();

    protected:
        AForm(std::string name, int sig_grade, int exec_grade);
        const std::string _name;
        bool        _signed;
        const int   _signature_grade;
        const int   _execution_grade;
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

        class UnsignedForm : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return ("The form need to be signed to be used");
                }
        } unsignedex;
        
};

std::ostream & operator<<(std::ostream & ostream, AForm const & instance);

#endif
