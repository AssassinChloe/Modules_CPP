/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:08:04 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:08:06 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
    public :

    Zombie();
    Zombie(std::string name);
    ~Zombie();

    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
    void announce(void) const;

    private :

    std::string _name;
};

#endif
