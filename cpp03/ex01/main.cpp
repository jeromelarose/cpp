#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main()
{
    std::cout << "\033[33m\nPARTIE DE L'INITIALISATION\033[37m\n" << std::endl;

    srand(clock());
    FragTrap    frag("\033[32mFRAG");
    ScavTrap    scav("\033[34mSCAV");

    std::cout << "\033[33m\nPARTIE SANS VAULT_HUNTER ET SANS CHALLENGE_NEW_COMMER\033\n[37m" << std::endl;

    frag.beRepaired(50);
    frag.rangedAttack("SCAV");
    scav.takeDamage(frag.get_rangedAttackDamage());
    scav.meleeAttack("FRAG");
    frag.takeDamage(scav.get_meleeAttackDamage());
    frag.meleeAttack("SCAV");
    scav.takeDamage(frag.get_meleeAttackDamage());
    scav.meleeAttack("FRAG");
    frag.takeDamage(scav.get_meleeAttackDamage());
    frag.beRepaired(60);
    scav.rangedAttack("FRAG");
    frag.takeDamage(scav.get_rangedAttackDamage());
    frag.rangedAttack("FRAG");
    scav.takeDamage(frag.get_rangedAttackDamage());
    scav.meleeAttack("FRAG");
    frag.takeDamage(scav.get_meleeAttackDamage());
    frag.rangedAttack("SCAV");
    scav.takeDamage(frag.get_rangedAttackDamage());
    scav.rangedAttack("FRAG");
    frag.takeDamage(scav.get_rangedAttackDamage());

    std::cout << "\n\033[33mPARTIE AVEC VAULT_HUNTER ET CHALLENGE_NEW_COMMER\033[37m\n" << std::endl;

    frag.vaulthunter_dot_exe("SCAV");
    scav.takeDamage(frag.get_vaultAttackDamage());
    scav.challengeNewcomer("FRAG");
    frag.takeDamage(scav.get_challengeAttackDamage());
    frag.beRepaired(50);
    scav.beRepaired(150);
    frag.vaulthunter_dot_exe("SCAV");
    scav.takeDamage(frag.get_vaultAttackDamage());
    scav.challengeNewcomer("FRAG");
    frag.takeDamage(scav.get_challengeAttackDamage());
    frag.vaulthunter_dot_exe("SCAV");
    scav.takeDamage(frag.get_vaultAttackDamage());
    scav.challengeNewcomer("FRAG");
    frag.takeDamage(scav.get_challengeAttackDamage());
    frag.vaulthunter_dot_exe("SCAV");
    scav.takeDamage(frag.get_vaultAttackDamage());
    scav.challengeNewcomer("FRAG");
    frag.takeDamage(scav.get_challengeAttackDamage());
    frag.vaulthunter_dot_exe("SCAV");
    scav.takeDamage(frag.get_vaultAttackDamage());
    scav.challengeNewcomer("FRAG");
    frag.takeDamage(scav.get_challengeAttackDamage());
    frag.vaulthunter_dot_exe("SCAV");
    scav.takeDamage(frag.get_vaultAttackDamage());
    scav.beRepaired(150);
    frag.vaulthunter_dot_exe("SCAV");
    scav.takeDamage(frag.get_vaultAttackDamage());
    scav.challengeNewcomer("FRAG");
    frag.takeDamage(scav.get_challengeAttackDamage());
    frag.beRepaired(50);
    scav.challengeNewcomer("FRAG");
    frag.takeDamage(scav.get_challengeAttackDamage());
    frag.vaulthunter_dot_exe("SCAV");
    scav.takeDamage(frag.get_vaultAttackDamage());
    scav.challengeNewcomer("FRAG");
    frag.takeDamage(scav.get_challengeAttackDamage());

    std::cout << "\n\033[33mPARTIE DESTRUCTION\033[37m\n" << std::endl;

    return (0);
}