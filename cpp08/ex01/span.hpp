#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{

public:

//CONSTRUCTEUR
    Span(unsigned int N);

//CONSTRUCTEUR DE COPIE
    Span(Span const &span);

//DESTRUCTEUR    
    virtual ~Span();

//OPERATEUR D'ASSIGNATION
    Span &operator=(const Span &span);

//METHODES
    void    addNumber(long n);
    long    shortestSpan();
    long    longestSpan();
    int     min();
    int     max();

private:

//ATTRIBUTS
    Span();
    unsigned int        m_size_max;
    std::vector<int>    m_tab;
};

#endif