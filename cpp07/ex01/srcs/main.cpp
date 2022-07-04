#include <iostream>
#include <iter.hpp>

void    multi(int &nb)
{
    nb *= 10;
}

void    rev(std::string &s)
{
   for (size_t i = 0; i < s.size() / 2; i++)
        std::swap(s.at(i), s.at(s.size() - i - 1));
}

int     main(void)
{
    std::cout << "\n\033[33mTEST TABLEAU DE INT\033[37m\n" << std::endl;

    std::cout << "\033[31mCreation d'un tableau de 5 int {1, 2, 3, 4, 5}\033[37m" << std::endl;
        int tab_int[5] = {1, 2, 3, 4, 5};

    std::cout << "\033[31mAffichage du tableau\033[37m" << std::endl;
      for (int i = 0; i < 5; ++i)
            std::cout << tab_int[i] << std::endl;
        std::cout << std::endl;

    std::cout << "\033[31mIteration de la fonction multi sur le tableau\033[37m" << std::endl;
        iter(tab_int, 5, multi);

    std::cout << "\033[31mAffichage du tableau\033[37m" << std::endl;
        for (int i = 0; i < 5; ++i)
            std::cout << tab_int[i] << std::endl;
    std::cout << std::endl;


    std::cout << "\n\033[33mTEST TABLEAU DE STD::STRING\033[37m\n" << std::endl;

    std::cout << "\033[31mCreation d'un tableau de 5 std::string {coucou, les, amis, de, 42}\033[37m" << std::endl;
        std::string tab_string[5] = {"coucou", "les", "amis", "de", "42"};

    std::cout << "\033[31mAffichage du tableau\033[37m" << std::endl;
       for (int i = 0; i < 5; ++i)
            std::cout << tab_string[i] << std::endl;
        std::cout << std::endl;

    std::cout << "\033[31mIteration de la fonction rev sur le tableau\033[37m" << std::endl;
        iter(tab_string, 5, rev);

    std::cout << "\033[31mAffichage du tableau\033[37m" << std::endl;
        for (int i = 0; i < 5; ++i)
            std::cout << tab_string[i] << std::endl;
    std::cout << std::endl;

    iter(tab_string, -1, rev);

    return (0);
}