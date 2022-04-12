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

# define CHAR 0
# define INT 1
# define DOUBLE 2
# define FLOAT 3
# define INVALID 4
# define SPE_CASE 5

# include <iostream>
# include <cctype>
# include <string>
# include <cstdlib>

class Convert
{
    public:
        Convert(std::string value);
        Convert(Convert const & src);
        virtual ~Convert();

        Convert& operator=(Convert const & var);
        std::string getToConvert() const;
        void checkToConvert();
    
    private:
        Convert();
        std::string _toconvert;
        
};

#endif
