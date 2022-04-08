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

int main ()
{
    Bureaucrat *chef = new Bureaucrat("Bobby", 1);
    
    ShrubberyCreationForm form("Shrubberization");
    RobotomyRequestForm request("Robotomization");
    std::cout << std::endl;

    std::cout << form << std::endl;
    std::cout << request << std::endl;
    std::cout << std::endl;

    chef->signAForm(form);
    chef.executeForm();
    std::cout << std::endl;

    chef->signAForm(request);
    chef.executeForm();
    chef.executeForm();
    chef.executeForm();
  
    std::cout << std::endl;

    delete(chef);
    return (0);
}