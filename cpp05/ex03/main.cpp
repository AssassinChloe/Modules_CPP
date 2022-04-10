/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:44:17 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/08 10:44:17 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
    std::cout << "   *** Creation of Bobby (1) ***" << std::endl;

    Bureaucrat chef("Bobby", 1);
    
    std::cout << "   *** Creation of Bob (70) ***" << std::endl;
    
    Bureaucrat employee("Bob", 70);
    
    ShrubberyCreationForm form("Garden");
    RobotomyRequestForm request("Viktor");
    PresidentialPardonForm pardon("The galaxy");
    
    std::cout << std::endl;

    std::cout << form << std::endl;
    std::cout << request << std::endl;
    std::cout << pardon << std::endl;
    std::cout << std::endl;
    
    employee.signAForm(form);
    employee.signAForm(request);
    employee.signAForm(pardon);
   
    std::cout << std::endl;

    employee.executeForm(form);
    employee.executeForm(request);
    employee.executeForm(pardon);

    std::cout << std::endl;

    std::cout << form << std::endl;
    std::cout << request << std::endl;
    std::cout << pardon << std::endl;
    std::cout << std::endl;

    chef.signAForm(form);
    chef.signAForm(request);
    chef.signAForm(pardon);
   
    std::cout << std::endl;

    chef.executeForm(form);
    chef.executeForm(request);
    chef.executeForm(pardon);

    std::cout << std::endl;

    return (0);
}