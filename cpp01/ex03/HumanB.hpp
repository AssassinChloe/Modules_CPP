/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:12:48 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:12:51 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
    public :

    HumanB(std::string name);
    ~HumanB();

    void    setWeapon(Weapon& new_weapon);
    void    attack();
    
    private :

    std::string _name;
    Weapon* _weapon;
};

#endif
