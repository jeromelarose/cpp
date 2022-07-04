#include <iostream>
#include <iterator>
#include <list>
#include "mutantstack.hpp"

int main()
{
    {
        std::cout << "\n\033[33mPARTIE SUJET OUTPUT LIST\033[37m\n" << std::endl;

        std::list<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        //[...]
        mstack.push_back(0);
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
    }
    std::cout << std::endl;
    {
        std::cout << "\n\033[33mPARTIE SUJET OUTPUT MUTANT_STACK\033[37m\n" << std::endl;

        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::stack<int> s(mstack);
    }

    std::cout << "\n\033[33mPARTIE SUJET\033[37m\n" << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    std::cout << "size: " << mstack.size() << std::endl;
    std::cout << "\033[31mpop\033[37m" << std::endl;
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;
    
    std::stack<int> s(mstack);

    std::cout << "\033[31mCopie de la stack par constructeur de copie\033[37m" << std::endl;

    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    std::cout << "\n\033[33mPARTIE SUJET\033[37m\n" << std::endl;

    std::cout << "\033[31mReinitialisation des iterateurs\033[37m" << std::endl;
        it = mstack.begin();
        ite = mstack.end();

    std::cout << "\033[31mCopie de l'iterateur it par constructeur de copie\033[37m" << std::endl;
        MutantStack<int>::iterator it2(it);

    std::cout << "\033[31mCopie de l'iterateur it2 par assignation\033[37m" << std::endl;
        MutantStack<int>::iterator ite2 = ite;

    std::cout << "\033[31mAffichage de la premiere stack avec les iterateur copier\033[37m" << std::endl;
        while (it2 != ite2)
        {
            std::cout << *it2 << std::endl;
            it2++;
        }

    return 0;
}