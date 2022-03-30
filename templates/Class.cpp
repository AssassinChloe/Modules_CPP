/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   {{CLASS}}.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "{{CLASS}}.hpp"

{{CLASS}}::{{CLASS}}()
{}

{{CLASS}}::{{CLASS}}({{CLASS}} const & src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

{{CLASS}}& {{CLASS}}::operator=({{CLASS}} const & var)
{
    if (this != &var)
    {
        /*modifier les variables*/
        this-> ;
    }
    return *this;
}

{{CLASS}}::~{{CLASS}}()
{}

std::ostream & operator<<(std::ostream & ostream, {{CLASS}} const & instance)
{
    ostream << ;
    return (ostream);
}
