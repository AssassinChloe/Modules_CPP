/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/06 15:35:35 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

# include "ICharacter.hpp"
# include <string>
# include <iostream>

class ICharacter;

class AMateria
{
    public:

        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria& operator=(AMateria const & var);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;

    protected:
        std::string _type;
    
    private :
        AMateria();
        AMateria(AMateria const & src);   
};

#endif
