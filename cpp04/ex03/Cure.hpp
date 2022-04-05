/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:33:12 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/04 17:14:31 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const & src);
        virtual ~Cure();

        Cure& operator=(Cure const & var);
        virtual AMateria *clone( void ) const ;
        virtual void use(ICharacter& target);      
};

#endif
