#include <iostream>
#include <string>

int main (void)
{
    std::string brain("HI THIS IS BRAIN");
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;
    
    std::cout << "- memory address of brain : " << &brain << std::endl;
    std::cout << "- memory adresse held by stringPTR : " << stringPTR << std::endl;
    std::cout << "- memory adresse held by stringREF : "<< &stringREF << std::endl << std::endl;

    std::cout << "- value of brain : " << brain << std::endl;
    std::cout << "- value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "- value pointed to by stringREF : " << stringREF << std::endl;
    return (0);
}