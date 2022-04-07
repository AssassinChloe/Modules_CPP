
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    Bureaucrat *chef = new Bureaucrat("Bobby", 1);
    
    ShrubberyCreationForm form("plop");

    chef->signAForm(form);
    form.beExecuted("test");

    delete(chef);
    return (0);
}