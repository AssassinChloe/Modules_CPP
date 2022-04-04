/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:29:13 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/04 16:59:50 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

# include <iostream>
# include "IMateriaSource.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & src);
        virtual ~Ice();

        Ice& operator=(Ice const & var);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
    private:
        
};

std::ostream & operator<<(std::ostream & ostream, Ice const & instance);

#endif
