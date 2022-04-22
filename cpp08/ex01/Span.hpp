#ifndef SPAN_H
#define SPAN_H

# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>
# include <iterator>

class Span
{
    public:
        Span(unsigned int N);
        Span(Span const & src);
        virtual ~Span();

        Span& operator=(Span const & var);

        unsigned int getSize() const;
        int getNumber(unsigned int index) const;
        void addNumber(int nb);
        int shortestSpan() const;
        int longestSpan() const;
    
    private:
        std::vector<int> _tab;
        unsigned int _size_max;
        Span();
};
#endif
