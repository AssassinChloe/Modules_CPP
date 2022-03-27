/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:12:40 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:12:41 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
    public :

    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void    attack() const;
    
    private :

    std::string _name;
    Weapon &_weapon;
};

#endif
