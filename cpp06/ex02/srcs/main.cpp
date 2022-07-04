/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:55:16 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/08 17:55:18 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Instance Introuvable" << std::endl;
}

void identify_from_reference(Base & p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Instance Introuvable" << std::endl;
}

Base    *generate(void)
{
    switch (rand() % 3)
    {
        case 0:
            std::cout << "\033[31mGENERATE RETURN A\033[37m" << std::endl;
            return new A;
            break;
        case 1:
            std::cout << "\033[31mGENERATE RETURN B\033[37m" << std::endl;
            return new B;
            break;
        case 2:
            std::cout << "\033[31mGENERATE RETURN C\033[37m" << std::endl;
            return new C;
            break;
        default:
            return NULL;
            break;
    }
    return (NULL);
}

int   main()  
{
    std::cout << "\n\033[33mPARTIE TEST\033[37m\n" << std::endl;
    
    srand(clock());

    Base *p;
    p = new A;
    identify_from_pointer(p);
    delete p;
    p = new B;
    identify_from_pointer(p);
    delete p;
    p = new C;
    identify_from_pointer(p);
    delete p;
    std::cout << std::endl;

    A a;
    B b;
    C c;
    identify_from_reference(a);
    identify_from_reference(b);
    identify_from_reference(c);

    std::cout << "\n\033[33mPARTIE GENERATE\033[37m\n" << std::endl;

    for (int i = 0; i < 10; ++i)
    {
        p = generate();
        std::cout << "identification par pointeur: ";
        identify_from_pointer(p);
        std::cout << "identification par reference: ";
        identify_from_reference(*p);
        if (p)
            delete p;
    }

    std::cout << std::endl;

    return (0);
}
