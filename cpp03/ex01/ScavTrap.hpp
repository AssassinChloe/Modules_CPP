/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:32 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        virtual ~ScavTrap();

        ScavTrap& operator=(ScavTrap const & var);

        bool get_status() const;
        void guardGate();
        
    private:
        ScavTrap();
        bool    _gate_keeping_active;        

};

#endif
