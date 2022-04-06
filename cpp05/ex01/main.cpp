
#include "Bureaucrat.hpp"

int main ()
{
    int i = 0;
    Bureaucrat *employee = new Bureaucrat("Bob", 150);
    Bureaucrat *chef = new Bureaucrat("Bobby", 1);
    Form form[3] = {Form("D5487", 42, 42), Form("D8487", 1, 150), Form("D8487-u", 150, 1)};

    std::cout << "Stats :" << std::endl << *employee << std::endl;
    std::cout << *chef << std::endl;

    std::cout << std::endl << "TEST employee signed the forms -> Errors are expected" << std::endl;
    while (i < 3)
    {
        try
        {
            std::cout << form[i] << std::endl;
            employee->signForm(form[i]);
        }
        catch(const std::exception& e)
        {
            std::cerr << "ERROR : " << e.what() << std::endl << std::endl;
        }
        i++;
    }
    
    i = 0;
    std::cout << std::endl << "TEST chef is signing" << std::endl;
    while (i < 3)
    {
        try
        {
            std::cout << form[i] << std::endl;
            chef->signForm(form[i]);
        }
        catch(const std::exception& e)
        {
            std::cerr << "ERROR : " << e.what() << std::endl << std::endl;
        }
        i++;
    }
    delete(employee);
    delete(chef);
    return (0);
}