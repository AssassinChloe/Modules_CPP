#include "main.hpp"

int main()
{
    int i;
    PhoneBook book;
    Contact     *test;
    std::string lname;
    std::string fname;
    std::string nname;
    std::string sec;
    std::string buff;
    std::string nb;

    i = 0;
    while (1)
    {
        std::cin >> buff;
        if (buff.compare("EXIT") == 0)
            return (0);
        else if (buff.compare("SEARCH") == 0)
        {
            if (i > 0)
            {
                std::cout << " Lastname | Firstname |  Nickname |  Number  |  Secret  " << std::endl;
                std::cout << std::setw(10);
                std::cout << test->lname << "|";
                std::cout << std::setw(10);
                std::cout << test->fname << "|"; 
                std::cout << std::setw(10);
                std::cout << test->nname << "|";
                std::cout << std::setw(10);
                std::cout << test->nb << "|" ;
                std::cout << std::setw(10);
                std::cout << test->sec << std::endl;
                
            }
            else
                std::cout << "No number yet" << std::endl;
        }
        else if (buff.compare("ADD") == 0)
        {
            std::cout << "Lastname : ";
            std::cin >> lname;
            std::cout << "Firstname : ";
            std::cin >> fname;
            std::cout << "Nickname : ";
            std::cin >> nname;
            std::cout << "Number : ";
            std::cin >> nb;
            std::cout << "Darkest Secret : ";
            std::cin >> sec;
            Contact contact(fname, lname, nname, nb, sec);
            test = &contact;
                std::cout << " Lastname | Firstname |  Nickname |  Number  |  Secret  " << std::endl;
                std::cout << std::setw(10);
                std::cout << test->lname << "|";
                std::cout << std::setw(10);
                std::cout << test->fname << "|"; 
                std::cout << std::setw(10);
                std::cout << test->nname << "|";
                std::cout << std::setw(10);
                std::cout << test->nb << "|" ;
                std::cout << std::setw(10);
                std::cout << test->sec << std::endl;
            i++;
        }
        // else
        // {
        //     std::cout << "Please use ADD, SEARCH or EXIT only" << std::endl;
        // }
    }
    return (0);
}