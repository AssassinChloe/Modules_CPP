/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:44:17 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/11 01:04:15 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void management(AForm *form, std::string name, int grade)
{
    Bureaucrat chef(name, grade);
    chef.signAForm(*form);
    chef.executeForm(*form);
    delete(form); 
}

int main ()
{
    try
    {
        Intern pat;
        AForm *form;
        std::string tabForm[] = {
            "shrubbery creation",
            "robotomy request",
            "presidential pardon",
            "make coffee",
        };
        std::string tabTarget[] = {
          "Central Park",
          "Blitzcrank",
          "Katniss",
          "Pat"
        };
        
        std::cout << std::endl;
        for (int i = 0; i < 4; i++)
        {
            form = pat.makeForm(tabForm[i], tabTarget[i]);
            if (form)
                management(form, "Bobby", 1);
            std::cout << std::endl;
        }

    }
    catch(const std::exception& e)
    {
        std::cerr << ERROR << e.what() << std::endl;
    }
    return (0);
}