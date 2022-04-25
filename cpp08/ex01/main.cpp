#include "Span.hpp"

int main ()
{

    Span sp = Span(10005);
    try
    {
        std::cout << "Test empty span" << std::endl;
        std::cout << "span size : " << sp.getSize() << std::endl;
        std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : "<< e.what() << std::endl;
    }
    try
    {
        std::cout << "longest span : " << sp.longestSpan() << std::endl << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : "<< e.what() << std::endl << std::endl;
    }
    try
    {
        std::cout << "Subject's Test" << std::endl;
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "span size : " << sp.getSize() << std::endl;
        std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
        std::cout << "longest span : " << sp.longestSpan() << std::endl << std::endl;
        
        std::cout << "Adding Multiple number using Iterator range" << std::endl;
        std::vector<int> vec(10000, 42);
        sp.addNumber(vec.begin(), vec.end());
        std::cout << "span size : " << sp.getSize() << std::endl;
        std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
        std::cout << "longest span : " << sp.longestSpan() << std::endl << std::endl;
        
        std::cout << "Test addNumber on a full span" << std::endl;
        sp.addNumber(68);

    }
    catch (const std::exception& e)
    {
        std::cout << "Error : "<< e.what() << std::endl;
    }
    
    return (0);
}