/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:14:01 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:14:03 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon
{
    public :

    Weapon(std::string type);
    ~Weapon();
    const std::string&  getType() const;
    void                setType(std::string new_weapon);

    private :

    std::string _type;
};

#endif
