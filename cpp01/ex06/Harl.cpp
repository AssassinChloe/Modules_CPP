/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:16:53 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:16:56 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() : _lvl_min(0)
{}

Harl::~Harl()
{}

int Harl::set_level(std::string level)
{
    std::string _tabLevel[] = 
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    int i;

    i = 0;
    while (i < 4)
	{
		if (level == _tabLevel[i])
            return (i);
        i++;
	}
    return (-1);
}
void Harl::set_filter(std::string lvl_min)
{
    this->_lvl_min = Harl::set_level(lvl_min);
    if (this->_lvl_min < 0)
        this->bad_filter_message();
}

void Harl::complain(std::string level)
{
    this->_level = Harl::set_level(level);
    if (this->_level >= this->_lvl_min && _lvl_min >= 0)
    {
        switch(this->_level)
        {
            case DEBUG:
                this->debug();
                break;
            case INFO:
                this->info();
                break;
            case WARNING:
                this->warning();
                break;
            case ERROR:
                this->error();
                break;
            default :
                break;
        }
    }
}

void Harl::bad_filter_message(void) const
{
	std::cout << "[ Probably complaining about insignificant problems ]";
    std::cout << std::endl << std::endl;
}

void Harl::debug( void ) const
{
    std::cout << "[DEBUG]" << std::endl << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple";
    std::cout << "-pickle-special-ketchup burger. I really do!";
    std::cout << std::endl << std::endl;
}

void Harl::info( void ) const
{
    std::cout << "[INFO]" << std::endl << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You";
    std::cout << " didn’t put enough bacon in my burger! If you did, I";
    std::cout << " wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void ) const
{
    std::cout << "[WARNING]" << std::endl << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve";
    std::cout << " been coming for years whereas you started working here ";
    std::cout << "since last month." << std::endl << std::endl;
}

void Harl::error( void ) const
{
    std::cout << "[ERROR]" << std::endl << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl << std::endl;
}
