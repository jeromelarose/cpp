/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:47:14 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:47:38 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <new>

void    ponyOnTheStack()
{
    Pony    poney("poney1", "stack");
    poney.jump();
    poney.run();  
}

void    ponyOnTheHeap()
{
    Pony    *poney;
    
    poney = new Pony("poney2", "heap");
    poney->jump();
    poney->run();
    delete (poney);
}

int     main()
{
    std::cout << "ALLOCATION DE PONEY1 SUR LA STACK" << std::endl;
    ponyOnTheStack();
    std::cout << std::endl << "ALLOCATION DE PONEY2 SUR LA HEAP" << std::endl;
    ponyOnTheHeap();
    return (0);
}
