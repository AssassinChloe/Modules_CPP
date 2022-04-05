
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw lowex;
    else if (grade > 150)
        throw hightex;
    else
        this->_grade = grade;
    std::cout << YELLOW << "Constructor Bureaucrat" << std::endl;
}


Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    *this = src;
    return ;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & var)
{
    if (this != &var)
    {
        this->_grade = var.getGrade();
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << YELLOW << "Destructor Bureaucrat" << std::endl;

}

std::ostream & operator<<(std::ostream & ostream, Bureaucrat const & instance)
{
    ostream << instance.getName() << ", bureaucrat grade " << instance.getGrade();
    return (ostream);
}

std::string const Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::promotion()
{
    if (this->_grade - 1 >= 1)
        this->_grade-= 1;
    else
        throw lowex;
}

void Bureaucrat::demotion()
{
    if (this->_grade + 1 <= 150)
        this->_grade+= 1;
    else
        throw hightex;
}
