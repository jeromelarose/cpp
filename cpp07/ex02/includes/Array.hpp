#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <new>
#include <exception>
#include <cstdlib>
#include <iostream>

template <typename T>
class Array
{
    public:

    //CONSTRUCTEUR
        Array() : m_tab(NULL), m_size(0)
        {   
        }

        Array(unsigned int n) : m_tab(new T[n]()), m_size(n)
        {
        }

    //CONSTRUCTEUR DE COPIE clean();
        Array(const Array &array)
        {
            if (this != &array)
            {
                m_tab = NULL;
                *this = array;
            }
        }

    //DESTRUCTEUR
        virtual ~Array()
        {
            clean();
        }

    //ASSIGNATION
        Array   &operator=(const Array &array)
        {
            if (this != &array)
            {
                clean();
                m_size = array.size();
                m_tab = new T[m_size];
                for (unsigned int i = 0; i < m_size; ++i)
                    m_tab[i] = array.m_tab[i];
            }
            return *this;
        }

    //OPERATEUR CROCHET
        T       &operator[](unsigned int n)
        {
            if (!m_tab || n < 0 || n >= m_size)
                throw std::exception();
            return (m_tab[n]);
        }

    //METODES
        unsigned int  size() const
        {
            return m_size;
        }

    private:
        //ATTRIBUTS
            T       *m_tab;
            unsigned int  m_size;

        //METODES
            void  clean()
            {
                if (m_tab)
                    delete[] m_tab;
            }
};

#endif