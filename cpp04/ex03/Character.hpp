/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:33:01 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/05 13:55:16 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(std::string name);
        Character(Character const & src);
        virtual ~Character();

        Character& operator=(Character const & var);
        virtual std::string const & getName();
        AMateria *getInventory(int i) const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
    
    private:
        Character();
        static int          _inventory_size;
        std::string         _name;
        AMateria            *_inventory[4];  
};

#endif
