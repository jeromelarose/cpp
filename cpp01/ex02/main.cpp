/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:49:32 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:49:35 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void    init_lst(std::string lst[])
{
    lst[0] = "jerome";   
    lst[1] = "paul";            
    lst[2] = "laurent";            
    lst[3] = "fabien";            
    lst[4] = "marie";            
    lst[5] = "sarha";            
    lst[6] = "lola";            
    lst[7] = "pierre";            
    lst[8] = "fabrice";            
    lst[9] = "jeane";
    lst[10] = "anais";   
    lst[11] = "hugo";            
    lst[12] = "enzo";            
    lst[13] = "hector";            
    lst[14] = "charle";            
    lst[15] = "manu";            
    lst[16] = "gaelle";            
    lst[17] = "coco";            
    lst[18] = "loulou";            
    lst[19] = "rose";
    lst[20] = "victor";   
    lst[21] = "yoann";            
    lst[22] = "yann";            
    lst[23] = "sylvie";            
    lst[24] = "melvine";            
    lst[25] = "leo";            
    lst[26] = "melanie";            
    lst[27] = "valerie";            
    lst[28] = "arthur";            
    lst[29] = "chacha";
}

Zombie  *randomChump(std::string lst[], ZombieEvent &event)
{
    Zombie *ret;

    ret = event.newZombie(lst[rand()%30]);
    return (ret);
}

int     main()
{
    Zombie      *zombie1;
    Zombie      *zombie2;
    Zombie      *zombie3;
    ZombieEvent  event;
    std::string lst[30];

    srand(clock());
    init_lst(lst);
    std::cout << "\033[31minitialisation des 3 zombie glouton\033[37m" << std::endl;
    event.setZombieType("glouton");
    zombie1 = randomChump(lst, event);
    zombie1->advert();
    std::cout << std::endl;
    zombie2 = randomChump(lst, event);
    zombie2->advert();
    std::cout << std::endl;
    zombie3 = randomChump(lst, event);
    zombie3->announce();
    std::cout << std::endl;

    std::cout << "\033[31msuppression du premier zombie glouton "
    << "et remplacement par un type clackers\033[37m" << std::endl;

    delete (zombie1);
    std::cout << std::endl;
    event.setZombieType("clackers");
    zombie1 = randomChump(lst, event);
    zombie1->advert();
    std::cout << std::endl;
    zombie2->announce();
    std::cout << std::endl;
    zombie3->advert();
    std::cout << std::endl;
  
    std::cout << "\033[31msuppression du 2 et 3eme zombie glouton "
    << " et remplacement par type mechant\033[37m" << std::endl;
  
    delete (zombie2);
    delete (zombie3);
    event.setZombieType("mechant");
    zombie2 = randomChump(lst, event);
    zombie3 = randomChump(lst,event);
    std::cout << std::endl;
    zombie1->announce();
    std::cout << std::endl;
    zombie2->advert();
    std::cout << std::endl;
    zombie3->advert();
    std::cout << std::endl;
    
    delete (zombie1);
    delete (zombie2);
    delete (zombie3);
    return (0);
}
