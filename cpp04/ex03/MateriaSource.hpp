/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:40:27 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/05 13:55:12 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

# include <iostream>
#include "AMateria.hpp"
class MateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        virtual ~MateriaSource();

        MateriaSource& operator=(MateriaSource const & var);
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
    private:
        
};

#endif
