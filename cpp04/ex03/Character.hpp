/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:33:01 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/04 17:26:22 by cassassi         ###   ########.fr       */
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
    
    private:
        Character();
        std::string const _name;
        std::string _inventory[4];  
};

#endif
