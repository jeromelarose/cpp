#include "FragTrap.hpp"

int     main()
{
    std::cout << "\033[33m\nPARTIE DE L'INITIALISATION\033[37m\n" << std::endl;

    srand(clock());
    FragTrap    r2d2("\033[32mR2D2");
    FragTrap    robocop("\033[34mROBOCOP");

    std::cout << "\033[33m\nPARTIE SANS VAULT_HUNTER\033\n[37m" << std::endl;

    r2d2.beRepaired(50);
    if (r2d2.get_energyPoints() >= 25 && r2d2.get_hitPoints())
    {
        r2d2.rangedAttack("ROBOCOP");
        robocop.takeDamage(r2d2.get_rangedAttackDamage());
    }
    if (robocop.get_energyPoints() >= 25 && robocop.get_hitPoints())
    {
        robocop.meleeAttack("R2D2");
        r2d2.takeDamage(robocop.get_meleeAttackDamage());
    } 
    if (r2d2.get_energyPoints() >= 25 && r2d2.get_hitPoints())
    {
        r2d2.meleeAttack("ROBOCOP");
        robocop.takeDamage(r2d2.get_meleeAttackDamage());
    }
    if (robocop.get_energyPoints() >= 25 && robocop.get_hitPoints())
    {
        robocop.meleeAttack("R2D2");
        r2d2.takeDamage(robocop.get_meleeAttackDamage());
    }
    r2d2.beRepaired(60);
    if (robocop.get_energyPoints() >= 25 && r2d2.get_hitPoints())
    {
        robocop.rangedAttack("R2D2");
        r2d2.takeDamage(robocop.get_rangedAttackDamage());
    }
    if (r2d2.get_energyPoints() >= 25 && r2d2.get_hitPoints())
    {
        r2d2.rangedAttack("R2D2");
        robocop.takeDamage(r2d2.get_rangedAttackDamage());
    }
    if (robocop.get_energyPoints() >= 25 && robocop.get_hitPoints())
    {
        robocop.meleeAttack("R2D2");
        r2d2.takeDamage(robocop.get_meleeAttackDamage());
    } 
    if (r2d2.get_energyPoints() >= 25 && r2d2.get_hitPoints())
    {
        r2d2.rangedAttack("ROBOCOP");
        robocop.takeDamage(r2d2.get_rangedAttackDamage());
    }
    if (robocop.get_energyPoints() >= 25 && robocop.get_hitPoints())
    {
        robocop.rangedAttack("R2D2");
        r2d2.takeDamage(robocop.get_rangedAttackDamage());
    }

    std::cout << "\n\033[33mPARTIE AVEC VAULT_HUNTER\033[37m\n" << std::endl;

    if (r2d2.get_energyPoints() >= 25 && r2d2.get_hitPoints())
    {
        r2d2.vaulthunter_dot_exe("ROBOCOP");
        robocop.takeDamage(r2d2.get_vaultAttackDamage());
    }
    if (robocop.get_energyPoints() >= 25 && robocop.get_hitPoints())
    {
        robocop.vaulthunter_dot_exe("R2D2");
        r2d2.takeDamage(robocop.get_vaultAttackDamage());
    }
    robocop.beRepaired(150);
    r2d2.beRepaired(50);
    if (r2d2.get_energyPoints() >= 25 && r2d2.get_hitPoints())
    {
        r2d2.vaulthunter_dot_exe("ROBOCOP");
        robocop.takeDamage(r2d2.get_vaultAttackDamage());
    }
    if (robocop.get_energyPoints() >= 25 && robocop.get_hitPoints())
    {
        robocop.vaulthunter_dot_exe("R2D2");
        r2d2.takeDamage(robocop.get_vaultAttackDamage());
    }
    if (r2d2.get_energyPoints() >= 25 && r2d2.get_hitPoints())
    {
        r2d2.vaulthunter_dot_exe("ROBOCOP");
        robocop.takeDamage(r2d2.get_vaultAttackDamage());
    }
    if (robocop.get_energyPoints() >= 25 && robocop.get_hitPoints())
    {
        robocop.vaulthunter_dot_exe("R2D2");
        r2d2.takeDamage(robocop.get_vaultAttackDamage());
    }
    if (r2d2.get_energyPoints() >= 25 && r2d2.get_hitPoints())
    {
        r2d2.vaulthunter_dot_exe("ROBOCOP");
        robocop.takeDamage(r2d2.get_vaultAttackDamage());
    }
    if (robocop.get_energyPoints() >= 25 && robocop.get_hitPoints())
    {
        robocop.vaulthunter_dot_exe("R2D2");
        r2d2.takeDamage(robocop.get_vaultAttackDamage());
    } 
    if (r2d2.get_energyPoints() >= 25 && r2d2.get_hitPoints())
    {
        r2d2.vaulthunter_dot_exe("ROBOCOP");
        robocop.takeDamage(r2d2.get_vaultAttackDamage());
    }
    if (robocop.get_energyPoints() >= 25 && robocop.get_hitPoints())
    {
        robocop.vaulthunter_dot_exe("R2D2");
        r2d2.takeDamage(robocop.get_vaultAttackDamage());
    }

    std::cout << "\n\033[33mPARTIE DESTRUCTION\033[37m\n" << std::endl;

    return (0);
}