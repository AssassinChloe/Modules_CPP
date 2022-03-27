/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:32 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef {{MACRO_GUARD}}
#define {{MACRO_GUARD}}

# include <iostream>
class {{CLASS}}
{
    public:
        {{CLASS}}();
        {{CLASS}}();
        virtual ~{{CLASS}}();

        {{CLASS}}& operator=({{CLASS}} const & rhs);
    private:
        
};

std::ofstream & operator<<(std::ofstream & o, {{CLASS}} const & i);

#endif
