#include "easyfind.hpp"
#include <iostream>
#include <vector>

int     main(void)
{
    int nb = 75;
    int myints[] = {-16, 2, 0, 77, 29};
    std::vector<int> tab (myints, myints + sizeof(myints) / sizeof(int) );
    std::vector<int>::iterator it = easyfind(tab, nb);
    if (it == tab.end())
        std::cout << nb << " n'est pas dans le container" << std::endl;
    else
        std::cout << *it << " est dans le container" << std::endl;

    return 0;
}