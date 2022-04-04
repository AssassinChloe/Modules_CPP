/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:32 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_H
#define AAnimal_H

# include <iostream>

class AAnimal
{
    public:
        AAnimal();
        AAnimal(AAnimal const & src);
        virtual ~AAnimal();
        AAnimal& operator=(AAnimal const & var);
        virtual void makeSound() const = 0;

    protected:
        std::string _type;
        std::string getType() const;
};

#endif
