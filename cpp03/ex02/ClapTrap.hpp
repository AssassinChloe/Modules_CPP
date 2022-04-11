/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/11 14:10:52 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

# include <iostream>
class ClapTrap
{
    public:
        ClapTrap(const std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();

        ClapTrap& operator=(ClapTrap const & var);

        std::string getname() const;
        int         gethitpoint() const;
        int         getenergy() const;
        int         getdamage() const;
        int         getmaxhealth() const;
        int         getmaxenergy() const;

        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        bool        check_vitals() const;
        

    protected:

        ClapTrap();
        std::string _name;
        int         _hit_points;
        int         _energy;
        int         _damage;
        int         _max_hit_point;
        int         _max_energy;
};

std::ostream & operator<<(std::ostream & ostream, ClapTrap const & i);

#endif
