#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int N) : _size_max(N)
{
    if (N > _tab.max_size())
        throw std::invalid_argument("The value you enter is over the size max of the container");
}

Span::Span(Span const & src)
{
    *this = src;
    return ;
}

Span& Span::operator=(Span const & var)
{
    if (this != &var)
    {
        if ((*this).getSize() > 0)
            (*this)._tab.erase((*this)._tab.begin(), (*this)._tab.end());
        if (var.getSize() > 0)
        {
            for (unsigned int i = 0; i < var.getSize(); i++)
            {
                (*this).addNumber(var.getNumber(i));
            }
        }
    }
    return *this;
}

Span::~Span()
{}

unsigned int Span::getSize() const
{
    return (_tab.size());
}

int Span::getNumber(unsigned int index) const
{
    if (index >= _tab.size())
        throw std::out_of_range("index invalid");
    else
        return (_tab[index]);
}

void Span::addNumber(int nb)
{
    if (_tab.size() < _size_max)
        _tab.push_back(nb);
    else
        throw std::overflow_error("Span is full");
}

int Span::shortestSpan() const
{
    if (_tab.size() <= 1)
        throw std::length_error("Span size must be >= 2");
    std::vector<int> tmp = _tab;
    std::vector<int>::iterator it = tmp.begin();
    std::vector<int>::iterator ite = tmp.end();
    std::vector<int>::iterator itplus = tmp.begin();
    itplus++;
    int sspan = std::abs((*it) - (*itplus));
    for (it = tmp.begin(); it != ite; it++)
    {
        for (itplus++; itplus != ite; itplus++)
        {
            if (std::abs((*it) - (*itplus)) < sspan)
                sspan = std::abs((*it) - (*itplus));
        }
        itplus = it;
        itplus++;
    }
    return (sspan);
    
}
int Span::longestSpan() const
{
    if (_tab.size() <= 1)
        throw std::length_error("Span size must be >= 2");
    std::vector<int> tmp = _tab;
    std::vector<int>::iterator it = tmp.begin();
    std::vector<int>::iterator ite = tmp.end();
    std::vector<int>::iterator itplus = tmp.begin();
    itplus++;
    int lspan = std::abs((*it) - (*itplus)); 
    for (it = tmp.begin(); it != ite; it++)
    {
        for (itplus++; itplus != ite; itplus++)
        {
            if (std::abs((*it) - (*itplus)) > lspan)
                lspan = std::abs((*it) - (*itplus));
        }
        itplus = it;
    }
    return (lspan);
}
