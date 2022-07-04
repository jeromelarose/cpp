#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int     main()
{
    std::cout << "\033[33m\nPARTIE DE L'INITIALISATION\033[37m\n" << std::endl;

    srand(clock());
    FragTrap    frag("\033[32mFRAG");
    ClapTrap    clap("\033[35mCLAP");
    NinjaTrap    ninja("\033[36mNINJA");
    ScavTrap    scav("\033[34mSCAV");

    std::cout << "\033[33m\nPARTIE TEST\033\n[37m" << std::endl;

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

    std::cout << "\n\033[33mPARTIE DESTRUCTION\033[37m\n" << std::endl;

    return (0);
}