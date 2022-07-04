#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int     main()
{
    srand(clock());

    std::cout << "\033[33m\nPARTIE DE L'INITIALISATION\033[37m\n" << std::endl;

    SuperTrap super("\033[35mSUPER");
    std::cout << std::endl;
    FragTrap    frag("\033[32mFRAG");
    std::cout << std::endl;
    ClapTrap    clap("\033[35mCLAP");
    std::cout << std::endl;
    NinjaTrap    ninja("\033[36mNINJA");
    std::cout << std::endl;
    ScavTrap    scav("\033[34mSCAV");

    std::cout << "\033[33m\nPARTIE VERIFICATION D'ATTRIBUT\033\n[37m" << std::endl;

    std::cout << "hitPoints: " << super.get_hitPoints() << std::endl;
    std::cout << "maxHitPoints: " << super.get_maxHitPoints() << std::endl;
    std::cout << "energiePoints: " << super.get_energyPoints() << std::endl;
    std::cout << "maxEnergiePoints: " << super.get_maxEnergyPoints() << std::endl;
    std::cout << "meleeAttackDamage: " << super.get_meleeAttackDamage() << std::endl;
    std::cout << "rangedAttackDamage: " << super.get_rangedAttackDamage() << std::endl;
    std::cout << "armorDamageReduction: " << super.get_armorDamageReduction() << std::endl;

    std::cout << "\033[33m\nPARTIE DE TEST SANS SUPER\033\n[37m" << std::endl;

    ninja.beRepaired(50);

    frag.rangedAttack("NINJA");
    ninja.takeDamage(frag.get_rangedAttackDamage());
    ninja.ninjaShoebox(frag);

    scav.meleeAttack("NINJA");
    ninja.takeDamage(scav.get_meleeAttackDamage());
    ninja.ninjaShoebox(scav);

    ninja.beRepaired(50);

    clap.rangedAttack("NINJA");
    ninja.takeDamage(clap.get_rangedAttackDamage());
    ninja.ninjaShoebox(clap);

    std::cout << "\033[33m\nPARTIE DE TEST AVEC ATTAQUE DE LOIN ET DE PRES\033\n[37m" << std::endl;

    std::cout << "\033[37mAttaque de FRAGTRAP de loin\033[37m" << std::endl;
    frag.rangedAttack("SUPER");
    std::cout << "\033[37mAttaque de SUPERTRAP de loin\033[37m" << std::endl;
    super.rangedAttack("NINJA");
    std::cout << "\033[37m\nAttaque de NINJATRAP de pres\033[37m" << std::endl;
    ninja.meleeAttack("SUPER");
    std::cout << "\033[37mAttaque de SUPERTRAP de pres\033[37m" << std::endl;
    super.meleeAttack("NINJA");



    std::cout << "\n\033[33mPARTIE DESTRUCTION\033[37m\n" << std::endl;

    return (0);
}