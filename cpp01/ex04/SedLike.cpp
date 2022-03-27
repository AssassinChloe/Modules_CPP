/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedLike.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:15:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:15:13 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedLike.hpp"
#include <iostream>

SedLike::SedLike(std::ifstream* ifs, std::ofstream* ofs, std::string tofind) : _ifs(ifs), _ofs(ofs), _tofind(tofind), _toput("")
{}

SedLike::~SedLike()
{}

void     SedLike::set_tofind(std::string tofind)
{
    this->_tofind = tofind;
}

void     SedLike::set_toput(std::string toput)
{
    this->_toput = toput;
}

void    SedLike::find_and_replace(std::string& buff)
{
    size_t          pos;

    pos = buff.find(this->_tofind);
    while (pos >= 0 && pos < buff.size())
    {
        buff.erase(pos, this->_tofind.size());
        buff.insert(pos, this->_toput);
        pos = buff.find(this->_tofind);
    }
    *this->_ofs << buff;
}

void    SedLike::replace()
{
    std::string     buff;
    
    std::getline(*this->_ifs, buff);
    if ((*this->_ifs).eof() && buff == "")
        return ;
    while (!(*this->_ifs).eof())
    {   
        SedLike::find_and_replace(buff);
        if (!(*this->_ifs).eof())
            *this->_ofs << std::endl;
        std::getline(*this->_ifs, buff);

    }
    SedLike::find_and_replace(buff);
    return ;
}
