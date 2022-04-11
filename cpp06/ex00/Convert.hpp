/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/11 17:27:45 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

# include <iostream>
class Convert
{
    public:
        Convert(std::string value);
        Convert(Convert const & src);
        virtual ~Convert();

        Convert& operator=(Convert const & var);
        std::string getToConvert() const;
    
    private:
        Convert();
        int checkToConvert();
        std::string _toconvert;
        
};

#endif
