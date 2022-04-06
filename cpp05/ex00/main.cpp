
#include "Bureaucrat.hpp"

int main ()
{
    Bureaucrat *employee = new Bureaucrat("Bob", 150);
    Bureaucrat *chef = new Bureaucrat("Bobby", 1);
    
    std::cout << "Stats :" << std::endl << *employee << std::endl;
    std::cout << *chef << std::endl;

    std::cout << std::endl << "TEST Bobbynator(0) : catch expected" << std::endl;
    try
    {
        Bureaucrat super_chef("Bobbynator", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl << "TEST Bo(200) : catch expected" << std::endl;
    try 
    {
        Bureaucrat random_person("Bo", 200);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
   std::cout << std::endl << "TEST to promote Bob and demote Bobby" << std::endl;
    try
    {
        employee->promotion();
        chef->demotion();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "Stats :" << std::endl << *employee << std::endl;
    std::cout << *chef << std::endl;

    std::cout << std::endl << "TEST to demote Bob and promote Bobby (back to initial stat)" << std::endl;
    try
    {
        chef->promotion();
        employee->demotion();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Stats :" << std::endl << *employee << std::endl;
    std::cout << *chef << std::endl;
    std::cout << std::endl << "TEST to demote Bob and promote Bobby again : catch expected" << std::endl;
    try
    {
        chef->promotion();
        employee->demotion();
    }
    catch(const std::exception& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    std::cout << "Stats :" << std::endl << *employee << std::endl;
    std::cout << *chef << std::endl;
    delete(employee);
    delete(chef);
    return (0);
}