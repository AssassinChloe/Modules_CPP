#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::complain( std::string level) const
{
    int i;
    
    i = 0;
    void ((Harl::*tabfptr[]))(void) const = { 
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error};

    std::string tabLevel[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};

	while (i < 4)
	{
		void (Harl::*display)( void ) const = tabfptr[i];
		if (level == tabLevel[i])
			(this->*display)();

        i++;
	}
}

void Harl::debug( void ) const
{
    std::cout << "[DEBUG]" << std::endl << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple";
    std::cout << "-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
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