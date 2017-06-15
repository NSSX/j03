#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <ctime>

class FragTrap{

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
    void vaulthunter_dot_exe(std::string const & target);

    FragTrap(std::string mName);
    FragTrap( FragTrap const & src);
    ~FragTrap(void);

    FragTrap & operator=(FragTrap const & rhs);

private:

};

#endif
