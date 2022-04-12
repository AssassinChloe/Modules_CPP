/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/12 16:42:23 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

# define CHAR 0
# define INT 1
# define DOUBLE 2
# define FLOAT 3
# define INVALID 4
# define SPE_CASE_F 5
# define SPE_CASE_D 6

# include <iostream>
# include <cctype>
# include <string>
# include <cstdlib>
# include <iomanip>

class Convert
{
    public:
        Convert(std::string value);
        Convert(Convert const & src);
        virtual ~Convert();

        Convert& operator=(Convert const & var);
        std::string getToConvert() const;
        void    conversion();
    
    private:
        void setType();
        void convert_char();
        void convert_int();
        void convert_double();
        void convert_float();
        void convert_spe();
        Convert();
        std::string _toconvert;
        int         _type;
        
};

#endif
