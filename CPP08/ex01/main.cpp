
#include "span.hpp"

int main( void ) {
    try 
    {
        Span sp = Span(5);

        sp.addNumber(6);
        // sp.addRange(3);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        // std::cout << sp.shortestSpan() << std::endl;
        // std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
