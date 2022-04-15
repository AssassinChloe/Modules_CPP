/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:56:23 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/15 14:58:47 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main ()
{
    std::string str_tab[] = {"str0", "str1", "str2", "str3", "str4"};
    int int_tab[] = {0, 1, 2, 3, 4};
    
    std::cout << "Iter du tableau de string" << std::endl;
    iter<std::string>(str_tab, 5, &fct);
    std::cout << std::endl << "Iter du tableau d'int" << std::endl;
    iter<int>(int_tab, 5, fct);

    return (0);
}