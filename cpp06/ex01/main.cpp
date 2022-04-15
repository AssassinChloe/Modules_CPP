/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:15:52 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/15 10:48:00 by cassassi         ###   ########.fr       */
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
    
    raw->nb = 42;
    raw->str = " - Coucou je suis le test";

    std::cout << &raw << " : Adresse de la structure Data" << std::endl;
    std::cout << raw << " : Contenu du pointeur de la structure Data" << std::endl;
    std::cout << "Les valeurs de la structure Data : "<< raw->nb << raw->str << std::endl << std::endl;
    
    ptr = serialize(raw);
    
    std::cout << ptr << " : La valeur de l'uintptr_t après serialize" << std::endl;
    std::cout << std::hex << "0x" << ptr << " : la même chose convertie en hexadécimal " << std::endl << std::endl;
    
    ret = deserialize(ptr);

    std::cout << &ret << " : l'adresse de la struct data qui reçoit le retour de deserialize" << std::endl;
    std::cout << ret << " : le contenu de la structure" << std::endl;
    std::cout << std::dec << "Les valeurs de la structure : " << ret->nb << ret->str << std::endl;
    std::cout << "Modification des valeurs de la structure" << std::endl;
    ret->nb++;
    ret->str = " lalalalala plop";
    std::cout << std::dec << "Les valeurs de la structure : " << ret->nb << ret->str << std::endl;
    
    delete(ret);
}
