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

unsigned int Span::shortestSpan() const
{
    if (_tab.size() <= 1)
        throw std::length_error("Span size must be >= 2");
    unsigned int sspan;
    std::vector<int>::const_iterator it = _tab.begin();
    std::vector<int>::const_iterator ite = _tab.end();
    std::sort(it, ite);
    std::vector<int>::const_iterator itplus = _tab.begin();
    itplus++;
    it = _tab.begin();
    sspan = *itplus - *it;
    std::sort(it, ite);
    for (it = _tab.begin(); it != ite; it++)
    {
        if (itplus != ite)
        {
            if ((*it - *itplus) < sspan)
                sspan = (*itplus - *it);
            itplus++;
        }
    }
    return (sspan);
    
}
unsigned int Span::longestSpan() const
{
    if (_tab.size() <= 1)
        throw std::length_error("Span size must be >= 2");
    unsigned int sspan;
    std::vector<int>::const_iterator it = _tab.begin();
    std::vector<int>::const_iterator ite = _tab.end();
    std::sort(it, ite);
    std::vector<int>::const_iterator itplus = _tab.begin();
    itplus++;
    it = _tab.begin();
    sspan = (*itplus) - (*it);
    std::sort(it, ite);
    for (it = _tab.begin(); it != ite; it++)
    {
        if (itplus != ite)
        {
            if (((*it) - (*itplus)) > sspan)
                sspan = ((*itplus) - (*it));
            itplus++;
        }
    }
    return (sspan);
}