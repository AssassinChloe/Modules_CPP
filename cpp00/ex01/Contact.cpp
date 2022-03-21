#include <iostream>
#include "main.hpp"

Contact::Contact(std::string pfname, std::string plname, std::string pnname, std::string pnb, std::string psec) : fname(pfname), 
lname(plname), nname(pnname), nb(pnb), sec(psec) {
    std::cout << "Contact created" << std::endl;
    return ;
}

Contact::~Contact(void)
{
    std::cout << "Contact deleted" << std::endl;
    return ;
}