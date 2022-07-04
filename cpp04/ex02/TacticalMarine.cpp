/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:00:21 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:00:22 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    TacticalMarine::TacticalMarine()
    {
        std::cout << "Tactical Marine ready for action !" << std::endl;
    };

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    TacticalMarine::TacticalMarine(TacticalMarine const &tacticalMarine)
    {
        if (this != &tacticalMarine)
        {
            std::cout << "Tactical Marine ready for action !" << std::endl;
            *this = tacticalMarine;
        }
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    TacticalMarine::~TacticalMarine()
    {
        std::cout << "Aaargh ..." << std::endl;
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////


////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    TacticalMarine &TacticalMarine::operator=(const TacticalMarine &tacticalMarine)
    {
        (void)tacticalMarine;
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    TacticalMarine* TacticalMarine::clone() const
    {
        return (new TacticalMarine(*this));
    }

    void TacticalMarine::battleCry() const
    {
        std::cout << "For the Holy PLOT !" << std::endl;
    }

    void TacticalMarine::rangedAttack() const
    {
        std::cout << "* attacks with a bolter *" << std::endl;
    }

    void TacticalMarine::meleeAttack() const
    {
        std::cout << "* attacks with a chainsword *" << std::endl;
    }
