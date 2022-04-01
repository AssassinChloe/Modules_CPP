/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:32 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & src);
        ~DiamondTrap();

        DiamondTrap& operator=(DiamondTrap const & var);
        std::string getname() const;
        void attack(const std::string& target);
        void whoAmI();
        
    private:
        DiamondTrap();
        std::string _name;
        
};

#endif
