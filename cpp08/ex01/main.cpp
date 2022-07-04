#include <iostream>
#include "span.hpp"
#include <cmath>
#include <climits>

int     main(void)
{
    srand(clock());

    std::cout << "\n\033[33mPARTIE SUJET\033[37m\n" << std::endl;

    try
    {
        Span sp = Span(100100);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Le plus petit ecart est: " << sp.shortestSpan() << std::endl;
        std::cout << "Le plus grand ecart est: " << sp.longestSpan() << std::endl;
        std::cout << "La valeur minimum est: " << sp.min() << std::endl;
        std::cout << "La valeur maximum est: " << sp.max() << std::endl;

        std::cout << "\n\033[33mPARTIE TEST\033[37m\n" << std::endl;

        sp.addNumber(55);
        sp.addNumber(100);
        sp.addNumber(27);
        sp.addNumber(110);
        sp.addNumber(1120);
        sp.addNumber(25);
       // sp.addNumber(-2147483648);
       // sp.addNumber(2147483647);

        std::cout << "Le plus petit ecart est: " << sp.shortestSpan() << std::endl;
        std::cout << "Le plus grand ecart est: " << sp.longestSpan() << std::endl;
        std::cout << "La valeur minimum est: " << sp.min() << std::endl;
        std::cout << "La valeur maximum est: " << sp.max() << std::endl;

        std::cout << "\n\033[33mPARTIE TEST ALEATOIRE\033[37m\n" << std::endl;


        for (int i = 0; i < 100000; ++i)
        {
            long ret = rand() + rand() + 1 - rand();
            sp.addNumber(ret);
        }

        std::cout << "Le plus petit ecart est: " << sp.shortestSpan() << std::endl;
        std::cout << "Le plus grand ecart est: " << sp.longestSpan() << std::endl;
        std::cout << "La valeur minimum est: " << sp.min() << std::endl;
        std::cout << "La valeur maximum est: " << sp.max() << std::endl;
        std::cout << std::endl;

        std::cout << "\n\033[33mPARTIE TEST DE COPIE\033[37m\n" << std::endl;

        std::cout << "\033[31mCopy = sp par constructeur de copie\033[37m" << std::endl;
        Span copy(sp);
        std::cout << "\033[31mAffichage de copy\033[37m" << std::endl;
        std::cout << "Le plus petit ecart est: " << copy.shortestSpan() << std::endl;
        std::cout << "Le plus grand ecart est: " << copy.longestSpan() << std::endl;
        std::cout << "La valeur minimum est: " << copy.min() << std::endl;
        std::cout << "La valeur maximum est: " << copy.max() << std::endl;

        std::cout << "\n\033[31mCopy2 = copy par assignation\033[37m" << std::endl;
        Span copy2 = copy;
        std::cout << "\033[31mAffichage de copy2\033[37m" << std::endl;
        std::cout << "Le plus petit ecart est: " << copy2.shortestSpan() << std::endl;
        std::cout << "Le plus grand ecart est: " << copy2.longestSpan() << std::endl;
        std::cout << "La valeur minimum est: " << copy2.min() << std::endl;
        std::cout << "La valeur maximum est: " << copy2.max() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    return 0;
}