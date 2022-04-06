/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:33:01 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/06 15:28:55 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

# include "ICharacter.hpp"
# include <string>

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
        int getInventorySize() const;
        AMateria *getInventory(int i) const;
    
    private:
        Character();
        std::string         _name;
        int                 _nb_obj;
        AMateria            *_inventory[4];  
};

#endif
