/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/06 15:45:15 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    std::cout << std::endl << "****test materia plop****" << std::endl;
    tmp = src->createMateria("plop");
    
    std::cout << "****test empty inventory slot****" << std::endl;
    me->use(3, *bob);
    
    std::cout << "****test inexisting inventory slot****" << std::endl;
    me->use(42, *bob);

    std::cout << "****test full inventory****" << std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    std::cout << "****test too much learning****" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    std::cout << std::endl;
    delete bob;
    delete me;
    delete src;
    return 0;
}