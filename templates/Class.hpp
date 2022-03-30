/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   {{CLASS}}.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:32 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef {{MACRO}}_H
#define {{MACRO}}_H

# include <iostream>
class {{CLASS}}
{
    public:
        {{CLASS}}();
        {{CLASS}}({{CLASS}} const & src);
        virtual ~{{CLASS}}();

        {{CLASS}}& operator=({{CLASS}} const & var);
    private:
        
};

std::ostream & operator<<(std::ostream & ostream, {{CLASS}} const & instance);

#endif
