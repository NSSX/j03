#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <ctime>

class ClapTrap {

public:

    int hit_points;
    int max_hit_points;
    int energy_points;
    int max_energy_points;
    int level;
    std::string name;
    int melee_attack_damage;
    int ranged_attack_damage;
    int armor_damage_reduction;

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ClapTrap(std::string mName);
    ClapTrap( ClapTrap const & src);
    ~ClapTrap(void);

    ClapTrap & operator=(ClapTrap const & rhs);

private:

};

#endif
