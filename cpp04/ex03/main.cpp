/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:15:24 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:15:31 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    std::cout << "\033[33m\nTEST\033[37m\n" << std::endl;


//      INITIALISATION DE IMATERIA_SOURCE ET DE 4 MATERIA STOCKER DEDANS

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
//      INITIALISATION D'UN ICHARACTER APPELER MOI ET D'UN AMATERIA APPELER TMP

    ICharacter* moi = new Character("moi");
    AMateria* tmp;

//      CREATION DE 4 MATERIAS STOCKER TEMPORAIRAEMENT DANS TMP PUIS EQUIPER DANS LE CARACTERE MOI

    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    AMateria *ori = tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);

    ICharacter* bob = new Character("bob");
    Character* pierre = new Character("pierre");
    moi->use(0, *bob);
    moi->use(1, *bob);
    moi->use(2, *pierre);
    moi->use(3, *pierre);
    moi->use(4, *bob);

    std::cout << "\033[33m\nCREATION DE CHARACTER PIERRE2 COPIE DE PIERRE\033[37m\n" << std::endl;
    Character pierre2(*pierre);
    moi->use(2, pierre2);
    std::cout << ori->getXP() << std::endl;
    
    std::cout << "\033[33m\nUNEQUIP MOI 3\033[37m\n" << std::endl;
    moi->unequip(2);
    moi->use(2, pierre2);
    std::cout << ori->getXP() << std::endl;

    std::cout << "\033[33m\nTMP2 = CLONE DE TMP, MOI EQUIPE DE TMP2\033[37m\n" << std::endl;
    AMateria *tmp2 = tmp->clone();
    moi->equip(tmp2);

    moi->use(2, pierre2);
    std::cout << tmp2->getXP() << std::endl;
    moi->use(2, pierre2);
    std::cout << tmp2->getXP() << std::endl;
    moi->use(2, pierre2);
    std::cout << tmp2->getXP() << std::endl;

    delete ori;
    delete bob;
    delete pierre;
    delete moi;
    delete src;
    return 0;
}
