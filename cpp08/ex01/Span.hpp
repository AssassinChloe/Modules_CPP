#ifndef SPAN_H
#define SPAN_H

# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>

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
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
    
    private:
        std::vector<int> _tab;
        unsigned int _size_max;
        Span();
};
#endif
