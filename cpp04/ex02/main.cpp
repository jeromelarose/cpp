/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:59:52 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:59:54 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <new>


int     main()
{
    {
        std::cout << "\n\033[33mPARTIE DU SUJET\033[37m\n" << std::endl;
        ISpaceMarine* bob = new TacticalMarine;
        ISpaceMarine* jim = new AssaultTerminator;
        ISquad* vlc = new Squad;
        vlc->push(bob);
        vlc->push(jim);
        for (int i = 0; i < vlc->getCount(); ++i)
        {
            ISpaceMarine* cur = vlc->getUnit(i);
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
        delete vlc;
    }
    std::cout << "\033[33m\nPARTIE DE TEST\033[37m\n" << std::endl;

    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    std::cout << "\033[35mbob2 = adress de bob par assignation\033[37m" << std::endl;
    ISpaceMarine* bob2 = bob;
    std::cout << "\033[35mjim2 = jim par assignation suivi de git clone\033[37m" << std::endl;
    ISpaceMarine* jim2 = jim->clone();

    ISquad *vlc = new Squad;
    std::cout << "il a y " << vlc->getCount() << " unites" << std::endl;
    std::cout << "\033[3mAjout de l'unite bob\033[37m" << std::endl;
    vlc->push(bob);
    std::cout << "il a y " << vlc->getCount() << " unites" << std::endl;
    std::cout << "\033[32mAjout de l'unite bob2\033[37m" << std::endl;
    vlc->push(bob2);
    std::cout << "il a y " << vlc->getCount() << " unites" << std::endl;
    std::cout << "\033[32mAjout de l'unite nullptr\033[37m" << std::endl;
    vlc->push(nullptr);
    std::cout << "il a y " << vlc->getCount() << " unites" << std::endl;
    std::cout << "\033[32mAjout de l'unite jim\033[37m" << std::endl;
    vlc->push(jim);
    std::cout << "il a y " << vlc->getCount() << " unites" << std::endl;
    std::cout << "\033[32mAjout de l'unite jim2\033[37m" << std::endl;
    vlc->push(jim2);
    std::cout << "il a y " << vlc->getCount() << " unites" << std::endl;
    std::cout << "\033[32mAjout de l'unite nullptr\033[37m" << std::endl;
    vlc->push(nullptr);
    std::cout << "il a y " << vlc->getCount() << " unites" << std::endl;
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    std::cout << "\n\033[33mPARTIE COPIE DE SQUAD\033[37m\n" << std::endl;

    ISpaceMarine* pierre = new TacticalMarine; 
    ISpaceMarine* sam = new AssaultTerminator; 
    Squad squad1;
    squad1.push(pierre);

    ISpaceMarine* cur = squad1.getUnit(0);
    std::cout << "\n\033[31msquad1: \033[37m" << std::endl;
    cur->battleCry();
    std::cout << "nombre d'elements " << squad1.getCount() << std::endl;

    std::cout << "\n\033[31msquad2 = squad1 \033[37m" << std::endl;    
    Squad squad2;
    squad2 = squad1;

    std::cout << "\n\033[31msquad2: \033[37m" << std::endl;
    cur = squad2.getUnit(0);
    cur->battleCry();
    std::cout << "nombre d'elements " << squad2.getCount() << std::endl;

    std::cout << "\n\033[31msquad2 apres nouveau push: \033[37m" << std::endl;
    squad2.push(sam);
    cur->battleCry();
    cur = squad2.getUnit(1);
    cur->battleCry();
    std::cout << "nombre d'elements " << squad2.getCount() << std::endl;

    std::cout << "\n\033[31msquad2 = squad1: \033[37m" << std::endl;
    squad2 = squad1;
    cur = squad2.getUnit(0);
    cur->battleCry();
    cur = squad2.getUnit(1);
    if (cur)
        cur->battleCry();
    std::cout << "nombre d'elements " << squad2.getCount() << std::endl;

    std::cout << "\n\033[33mPARTIE COPIE DE MARINE\033[37m\n" << std::endl;

    TacticalMarine marine;
    marine.battleCry();
    TacticalMarine marine2(marine);
    marine2.battleCry();

    std::cout << std::endl;

    return 0;
}
