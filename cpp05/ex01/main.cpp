/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:45:33 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/08 10:45:33 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# define ERROR "\033[1;31m ERROR : \033[0m"

int main ()
{
    int i = 0;

    Bureaucrat *employee = new Bureaucrat("Bob", 150);
    Bureaucrat *chef = new Bureaucrat("Bobby", 1);

    std::cout << std::endl << "     ***** TEST creating 4 invalids forms -> Errors are expected *****" << std::endl;
    std::cout << "     ***** signature grade == 200 then 0 - execution grade == 200 then 0 *****" << std::endl << std::endl;
    try
    {
           Form invalid1("Invalid1", 200, 20);
    }
    catch(const std::exception& e)
    {
        std::cerr << ERROR << e.what() << std::endl;
    }
    try
    {
           Form invalid1("Invalid1", 0, 20);
    }
    catch(const std::exception& e)
    {
        std::cerr << ERROR << e.what() << std::endl;
    }
    try
    {
           Form invalid1("Invalid1", 20, 200);
    }
    catch(const std::exception& e)
    {
        std::cerr << ERROR << e.what() << std::endl;
    }
    try
    {
           Form invalid1("Invalid1", 20, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << ERROR << e.what() << std::endl;
    }
    std::cout << std::endl << "Bureaucrats' stats :" << std::endl << *employee << std::endl;
    std::cout << *chef << std::endl;
    
    Form form[3] = {Form("D5487", 42, 42), Form("D8487", 1, 150), Form("D8487-u", 150, 1)};

    std::cout << std::endl << "     ***** TEST employee Bob(150) signed the forms we just created-> Errors are expected *****" << std::endl << std::endl;
    while (i < 3)
    {
        try
        {
            std::cout << form[i] << std::endl;
            employee->signForm(form[i]);
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << ERROR << e.what() << std::endl << std::endl;
        }
        i++;
    }
    
    i = 0;
    std::cout << std::endl << "     ***** TEST chef Bobby(1) is signing *****" << std::endl << std::endl;
    while (i < 3)
    {
        try
        {
            std::cout << form[i] << std::endl;
            chef->signForm(form[i]);
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << ERROR << e.what() << std::endl  << std::endl;
        }
        i++;
    }
    delete(employee);
    delete(chef);
    return (0);
}