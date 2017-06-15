#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){

    srand(time(NULL));
    FragTrap ahri("Ahri");
    FragTrap jean("Jean");
    jean.rangedAttack(ahri.name);
    jean.takeDamage(20);
    jean.takeDamage(20);
    jean.takeDamage(20);
    jean.takeDamage(20);
    jean.takeDamage(20);
    jean.beRepaired(10);
    jean.beRepaired(10);
    jean.beRepaired(10);
    jean.beRepaired(10);
    jean.beRepaired(10);
    jean.beRepaired(10);
    jean.beRepaired(10);
    jean.beRepaired(10);
    jean.beRepaired(10);
    jean.beRepaired(10);
    jean.beRepaired(10);
    std::cout << jean.name << " have " << jean.hit_points << " hit points" << std::endl;
    jean.vaulthunter_dot_exe("cristophe");
    jean.vaulthunter_dot_exe("cristophe");
    jean.vaulthunter_dot_exe("cristophe");
    jean.vaulthunter_dot_exe("cristophe");
    jean.vaulthunter_dot_exe("cristophe");
    jean.vaulthunter_dot_exe("cristophe");

    ahri.takeDamage(10);
    jean = ahri;
    std::cout << jean.name << " have " << jean.hit_points << " hit points" << std::endl;

    FragTrap louis(ahri);
    std::cout << "Name Louis but name is : " << louis.name << " have " << louis.hit_points << " hit points" << std::endl;



    ScavTrap edward("Edward");
    ScavTrap nautilus("Nautilus");
    nautilus.rangedAttack(edward.name);
    nautilus.takeDamage(20);
    nautilus.takeDamage(20);
    nautilus.takeDamage(20);
    nautilus.takeDamage(20);
    nautilus.takeDamage(20);
    nautilus.beRepaired(10);
    nautilus.beRepaired(10);
    nautilus.beRepaired(10);
    nautilus.beRepaired(10);
    nautilus.beRepaired(10);
    nautilus.beRepaired(10);
    nautilus.beRepaired(10);
    nautilus.beRepaired(10);
    nautilus.beRepaired(10);
    nautilus.beRepaired(10);
    nautilus.beRepaired(10);
    std::cout << nautilus.name << " have " << nautilus.hit_points << " hit points" << std::endl;
    nautilus.challengeNewcomer();
    nautilus.challengeNewcomer();
    nautilus.challengeNewcomer();
    nautilus.challengeNewcomer();
    nautilus.challengeNewcomer();
    
    edward.takeDamage(10);
    nautilus = edward;
    std::cout << nautilus.name << " have " << nautilus.hit_points << " hit points" << std::endl;

    ScavTrap brand(edward);
    std::cout << "Name Brand but name is : " << brand.name << " have " << brand.hit_points << " hit points" << std::endl;









    return (0);
}
