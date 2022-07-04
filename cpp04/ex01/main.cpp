/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:12:52 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:12:54 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
    std::cout << "\033[33m\nSUJET\n\033[37m" << std::endl;

    Character* moi = new Character("moi");
    std::cout << *moi;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);
    moi->attack(b);
    std::cout << "\033[32mHP enemy = " << b->getHP() << "\033[37m" << std::endl;
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << "\033[32mHP enemy = " << b->getHP() << "\033[37m" << std::endl;
    std::cout << *moi;
    moi->attack(b);
    std::cout << "\033[32mHP enemy = " << b->getHP() << "\033[37m" << std::endl;
    std::cout << *moi;

    std::cout << "\033[33m\nTEST\n\033[37m" << std::endl;

    Enemy* c = new SuperMutant();

    std::cout << "\033[35m\nmoi2 = moi par constructeur de copie\n\033[37m" << std::endl;
    Character moi2(*moi);

    std::cout << "\033[31m\nattack\n\033[37m" << std::endl;
    moi2.attack(c);
    std::cout << moi2;
    std::cout << "\033[32mHP enemy = " << c->getHP() << "\033[37m" << std::endl;

    std::cout << "\033[35m\nC2 = C par constructeur de copie\n\033[37m" << std::endl;
    Enemy c2(*c);

    std::cout << "\033[31m\nattack\n\033[37m" << std::endl;
    moi2.attack(&c2);
    std::cout << moi2;
    std::cout << "\033[32mHP enemy = " << c2.getHP() << "\033[37m" << std::endl;
    std::cout << "\033[35m\nprends arme PowerFist\033[37m" << std::endl;
    moi2.equip(pf);
    std::cout << "\033[31m\nattack\n\033[37m" << std::endl;
    moi2.attack(&c2);
    std::cout << moi2;
    std::cout << "\033[32mHP enemy = " << c2.getHP() << "\033[37m" << std::endl;
    std::cout << "\033[31m\nattack\n\033[37m" << std::endl;
    moi2.attack(&c2);
    std::cout << moi2;
    std::cout << "\033[32mHP enemy = " << c2.getHP() << "\033[37m" << std::endl;
    std::cout << "\033[31m\nattack\n\033[37m" << std::endl;
    moi2.attack(&c2);
    std::cout << moi2;
    std::cout << "\033[31m\nrecup\033[37m" << std::endl;
    moi2.recoverAP();
    std::cout << moi2;
    std::cout << "\033[31m\nrecup\033[37m" << std::endl;
    moi2.recoverAP();
    std::cout << moi2;
    std::cout << "\033[31m\nrecup\033[37m" << std::endl;
    moi2.recoverAP();
    std::cout << moi2;
    std::cout << "\033[31m\nrecup\033[37m" << std::endl;
    moi2.recoverAP();
    std::cout << moi2;  
    std::cout << "\033[31m\nrecup\033[37m" << std::endl;
    moi2.recoverAP();
    std::cout << moi2;
    std::cout << "\033[32mHP enemy = " << c2.getHP() << "\033[37m" << std::endl;
    std::cout << "\033[31m\nattack\n\033[37m" << std::endl;
    moi2.attack(&c2);
    std::cout << moi2;
    std::cout << "\033[32mHP enemy = " << c2.getHP() << "\033[37m" << std::endl;
    std::cout << "\033[31m\nattack\n\033[37m" << std::endl;
    moi2.attack(&c2);
    std::cout << moi2;
    std::cout << "\033[32mHP enemy = " << c2.getHP() << "\033[37m" << std::endl;

    std::cout << "\033[33m\nCOPIE\n\033[37m" << std::endl;
    
    PlasmaRifle pr2;
    PlasmaRifle prCopy(pr2);
    AWeapon *AWpr = &prCopy; 
    
    RadScorpion rd;
    RadScorpion rdCopy(rd);

    moi2.equip(AWpr);
    std::cout << moi2;
    moi2.attack(&rdCopy);
    std::cout << std::endl;

    prCopy = pr2;
    AWpr = &prCopy;
    moi2.attack(&rdCopy);
    std::cout << std::endl;

    delete moi;
    delete pr;
    delete pf;
    delete c;
    delete b;

return 0;
}
