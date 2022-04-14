/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:15:52 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/14 17:34:47 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data *raw = new Data;
    Data *ret;
    uintptr_t ptr;
    
    ptr = serialize(raw);
    ret = deserialize(ptr);

    std::cout << raw << std::endl;
    std::cout << std::hex << "0x" << ptr << std::endl;
    std::cout << ret << std::endl;
}
