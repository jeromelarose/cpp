#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
    
public:

//CONSTRUCTEUR    
    MutantStack() {};

//CONSTRUCTEUR DE COPIE
    MutantStack(MutantStack const &mutantStack) : std::stack<T>(mutantStack)
    {
    }

//DESTRUCTEUR    
    ~MutantStack()
    {
    }

//ACCESSEURS 

//ITERATOR   
    typedef typename MutantStack<T>::container_type::iterator                   iterator;
    typedef typename MutantStack<T>::container_type::const_iterator             const_iterator;
    typedef typename MutantStack<T>::container_type::reverse_iterator           reverse_iterator;
    typedef typename MutantStack<T>::container_type::const_reverse_iterator     const_reverse_iterator;

//OPERATEUR D'ASSIGNATION
    MutantStack &operator=(const MutantStack &mutantStack)
    {
        if (this != &mutantStack)
            std::stack<T>::operator=(mutantStack);
        return (*this);
    }

//METHODES
    iterator    begin(void)
    {
        return MutantStack<T>::c.begin();
    }

    iterator    end(void)
    {
        return MutantStack<T>::c.end();
    }

    const_iterator    begin(void) const
    {
        return MutantStack<T>::c.begin();
    }

    const_iterator    end(void) const
    {
        return MutantStack<T>::c.end();
    }

    reverse_iterator    rbegin(void)
    {
        return MutantStack<T>::c.rbegin();
    }

    reverse_iterator    rend(void)
    {
        return MutantStack<T>::c.rend();
    }

    const_reverse_iterator    rbegin(void) const
    {
        return MutantStack<T>::c.rbegin();
    }

    const_reverse_iterator    rend(void) const
    {
        return MutantStack<T>::c.rend();
    }

private:

//ATTRIBUTS

};

#endif