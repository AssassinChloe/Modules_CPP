/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:56:23 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/19 17:13:52 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename array>
void display(array const & content)
{
    std::cout << content << std::endl;
}

int main ()
{
    const std::string str_tab[] = {"str0", "str1", "str2", "str3", "str4"};
    
    int int_tab[] = {0, 1, 2, 3, 4};
    
    std::cout << "Iter du tableau de string" << std::endl;
    iter<const std::string>(str_tab, 5, display);
    
    std::cout << std::endl << "Iter du tableau d'int" << std::endl;
    iter<int>(int_tab, 5, display);

    return (0);
}