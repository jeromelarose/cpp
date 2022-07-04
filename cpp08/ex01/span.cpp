#include "span.hpp"
#include <exception>
#include <algorithm>
#include <climits>

#include <iostream>

//CONSTRURCTEUR
    Span::Span(unsigned int N) : m_size_max(N)
    {
    }

//CONSTRUCTEUR DE COPIE
    Span::Span(Span const &span)
    {
        if (this != &span)
            *this = span;
    }

//DESTRUCTEUR    
    Span::~Span()
    {
    }

//OPERATEUR D'ASSIGNATION
    Span &Span::operator=(const Span &span)
    {
        if (this != &span)
        {
            m_size_max = span.m_size_max;
            m_tab = span.m_tab;
        }
        return (*this);
    }

//METHODE
    void    Span::addNumber(long n)
    {
        if (n < INT_MIN || n > INT_MAX || (m_tab.size() >= m_size_max))
            throw std::exception();
        m_tab.push_back(n);
    }

    long   Span::shortestSpan()
    {
        long ret = LONG_MAX;
        if (m_tab.size() > 1)
        {
            std::vector<int> copy(m_tab);
            std::sort(copy.begin(), copy.end());
            for(std::vector<int>::iterator it = copy.begin() + 1 ; it < copy.end() ; ++it)
            {
                if (*it == *(it - 1))
                    return 0;
                long nb1 = abs(*it);
                long nb2 = abs(*(it - 1));
                if (nb1 > nb2 && (nb1 - nb2) < ret)
                    ret = nb1 - nb2;
                if (nb2 > nb1 && (nb2 - nb1) < ret)
                   ret = nb2 - nb1;
            }
            return (ret);
        }
        return 0;
    }
        
    long        Span::longestSpan()
    {
        long    ret = *std::max_element(m_tab.begin(), m_tab.end());
        ret -= *std::min_element(m_tab.begin(), m_tab.end());
        return ret;
    }

    int    Span::min()
    {
        return *std::min_element(m_tab.begin(), m_tab.end());
    }

    int    Span::max()
    {
        return *std::max_element(m_tab.begin(), m_tab.end());
    }


