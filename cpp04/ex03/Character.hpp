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

# include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(const std::string & name);
        Character(Character const & src);
        virtual ~Character();

        Character& operator=(const Character & var);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
        int Character::getInventorySize() const;
        AMateria *getInventory(int i) const;
    
    private:
        Character();
        std::string         _name;
        int                 _nb_obj;
        AMateria            *_inventory[4];  
};

#endif
