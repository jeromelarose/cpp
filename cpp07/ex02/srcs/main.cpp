#include "Array.hpp"
#include <iostream>

int     main(void)
{
    {
        std::cout << "\n\033[33mPARTIE TEST TYPE INT\033[37m\n" << std::endl;

        std::cout << "\033[31mCreation d'un Array 'tab_vide' de type int vide\033[37m" << std::endl;
            Array<int> tab_vide;
        std::cout << "\033[31mAffichage de 'tab_vide'\033[37m" << std::endl;
            for (size_t i = 0; i < tab_vide.size(); ++i)
                std::cout << tab_vide[i] << std::endl;
            std::cout << std::endl;

        std::cout << "\033[31mCreation d'un Array 'tab' de type int de taille 5\033[37m" << std::endl;
            Array<int> tab(5);
        std::cout << "\033[31mAffichage de 'tab'\033[37m" << std::endl;
            for (size_t i = 0; i < tab.size(); ++i)
                std::cout << tab[i] << std::endl;
            std::cout << std::endl;

        std::cout << "\033[31mInsertion de la valeur 4 dans 'tab[2]'\033[37m" << std::endl;
            tab[2] = 4;
        std::cout << "\033[31mAffichage de 'tab'\033[37m" << std::endl;
            for (size_t i = 0; i < tab.size(); ++i)
                std::cout << tab[i] << std::endl;
            std::cout << std::endl;

        std::cout << "\033[31mCreation de Array 'tab2' Copie de 'tab' par constructeur de copie\033[37m" << std::endl;
            Array<int> tab2(tab);
        std::cout << "\033[31mAffichage de 'tab2'\033[37m" << std::endl;
            for (size_t i = 0; i < tab2.size(); ++i)
                std::cout << tab2[i] << std::endl;
            std::cout << std::endl;
        
        std::cout << "\033[31mInsertion de la valeur 2 dans 'tab2[3]'\033[37m" << std::endl;
            tab2[3] = 2;
        std::cout << "\033[31mAffichage de 'tab2'\033[37m" << std::endl;
            for (size_t i = 0; i < tab2.size(); ++i)
                std::cout << tab2[i] << std::endl;
            std::cout << std::endl;

        std::cout << "\033[31mCreation de Array 'tab3' Copie de 'tab2' par assignation\033[37m" << std::endl;
            Array<int> tab3 = tab2;
        std::cout << "\033[31mAffichage de 'tab3'\033[37m" << std::endl;
            for (size_t i = 0; i < tab3.size(); ++i)
                std::cout << tab3[i] << std::endl;
            std::cout << std::endl;

        std::cout << "\033[31mInsertion de la valeur 2 dans 'tab3[5]'\033[37m" << std::endl;
        try
        {
            tab2[5] = 2;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;

        std::cout << "\033[31mInsertion de la valeur 2 dans 'tab3[-1]'\033[37m" << std::endl;
        try
        {
            tab2[-1] = 2;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;

        std::cout << "\033[31mAffichage de 'tab3[5]'\033[37m" << std::endl;
        try
        {
            std::cout << tab[5] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;

        std::cout << "\033[31mAffichage de 'tab3[-1]'\033[37m" << std::endl;
        try
        {
            std::cout << tab[-1] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << "\n\033[33mPARTIE TEST TYPE std::string\033[37m\n" << std::endl;

        std::cout << "\033[31mCreation d'un Array 'tab_vide' de type std::string vide\033[37m" << std::endl;
            Array<std::string> tab_vide;
        std::cout << "\033[31mAffichage de 'tab_vide'\033[37m" << std::endl;
            for (size_t i = 0; i < tab_vide.size(); ++i)
                std::cout << tab_vide[i] << std::endl;
            std::cout << std::endl;

        std::cout << "\033[31mCreation d'un Array 'tab' de type std::string de taille 5\033[37m" << std::endl;
            Array<std::string> tab(5);
        std::cout << "\033[31mAffichage de 'tab'\033[37m" << std::endl;
            for (size_t i = 0; i < tab.size(); ++i)
                std::cout << tab[i] << std::endl;
            std::cout << std::endl;

        std::cout << "\033[31mInsertion de la chaine 'coucou les amis de' dans 'tab[2]'\033[37m" << std::endl;
            tab[2] = "coucou les amis de";
        std::cout << "\033[31mAffichage de 'tab'\033[37m" << std::endl;
            for (size_t i = 0; i < tab.size(); ++i)
                std::cout << tab[i] << std::endl;
            std::cout << std::endl;

        std::cout << "\033[31mCreation de Array 'tab2' Copie de 'tab' par constructeur de copie\033[37m" << std::endl;
            Array<std::string> tab2(tab);
        std::cout << "\033[31mAffichage de 'tab2'\033[37m" << std::endl;
            for (size_t i = 0; i < tab2.size(); ++i)
                std::cout << tab2[i] << std::endl;
            std::cout << std::endl;
        
        std::cout << "\033[31mInsertion de la chaine '42' dans 'tab2[3]'\033[37m" << std::endl;
            tab2[3] = "42";
        std::cout << "\033[31mAffichage de 'tab2'\033[37m" << std::endl;
            for (size_t i = 0; i < tab2.size(); ++i)
                std::cout << tab2[i] << std::endl;
            std::cout << std::endl;

        std::cout << "\033[31mCreation de Array 'tab3' Copie de 'tab2' par assignation\033[37m" << std::endl;
            Array<std::string> tab3 = tab2;
        std::cout << "\033[31mAffichage de 'tab3'\033[37m" << std::endl;
            for (size_t i = 0; i < tab3.size(); ++i)
                std::cout << tab3[i] << std::endl;
            std::cout << std::endl;

        std::cout << "\033[31mInsertion de la chaine 'test' dans 'tab3[5]'\033[37m" << std::endl;
        try
        {
            tab2[5] = "test";
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;

        std::cout << "\033[31mInsertion de la chaine 'test' dans 'tab3[-1]'\033[37m" << std::endl;
        try
        {
            tab2[-1] = "test";
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;

        std::cout << "\033[31mAffichage de 'tab3[5]'\033[37m" << std::endl;
        try
        {
            std::cout << tab[5] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;

        std::cout << "\033[31mAffichage de 'tab3[-1]'\033[37m" << std::endl;
        try
        {
            std::cout << tab[-1] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;
    }
    return (0);
}