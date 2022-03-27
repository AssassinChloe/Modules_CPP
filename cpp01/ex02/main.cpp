/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:11:58 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:12:00 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (void)
{
    std::string brain("HI THIS IS BRAIN");
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;
    
    std::cout << "- memory address of brain : " << &brain << std::endl;
    std::cout << "- memory adresse held by stringPTR : " << stringPTR << std::endl;
    std::cout << "- memory adresse held by stringREF : "<< &stringREF << std::endl << std::endl;

    std::cout << "- value of brain : " << brain << std::endl;
    std::cout << "- value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "- value pointed to by stringREF : " << stringREF << std::endl;
    return (0);
}
