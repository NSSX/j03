#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ClapTrap const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

ClapTrap::ClapTrap(std::string mName) : name(mName)
{
    std::cout << "CL4P-UFP "<< this->name << " initialized nice nice nice"<< std::endl;
    return;
}

ClapTrap::~ClapTrap(void){
    std::cout << "CL4P-UFP "<< this->name << " destroyed rly unlucky"<< std::endl;
    return;
}

void ClapTrap::rangedAttack(std::string const & target){
    std::cout << "CL4P-UFP "<< this->name << " attacks "<< target << " at range(what a god), causing  " << this->ranged_attack_damage << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target){
    std::cout << "CL4P-UFP "<< this->name << " attacks "<< target << " at melee(what a god), causing " << this->melee_attack_damage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(this->hit_points > 0){
        int realAmount = amount - this->armor_damage_reduction;
        if(realAmount < 0)
        {
            realAmount = 0;
        }
        std::cout << "CL4P-UFP "<< this->name << " taking "<< realAmount << " damage ... calm down" << std::endl;
        this->hit_points -= realAmount;
        if(this->hit_points < 0){
            this->hit_points = 0;
        }
        std::cout << "CL4P-UFP "<< this->name << " Current Hit Points "<< this->hit_points << std::endl;
    }
    else{
            std::cout << "CL4P-UFP "<< this->name << " already dead " << std::endl;
    }
    return;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->hit_points >= this->max_hit_points){
        std::cout << "CL4P-UFP "<< this->name << " already full " << std::endl;
    }
    else if(this->hit_points > 0){
        int realAmount = amount;

        std::cout << "CL4P-UFP "<< this->name << " repaired "<< realAmount << " Hit points, ye rly nice" << std::endl;
        this->hit_points += realAmount;
        if(this->hit_points > this->max_hit_points){
            this->hit_points = this->max_hit_points;
        }
        std::cout << "CL4P-UFP "<< this->name << " Current Hit Points "<< this->hit_points << std::endl;
    }
    else{
            std::cout << "CL4P-UFP "<< this->name << " already dead " << std::endl;
    }
}


ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
    std::cout << "Assignation operator called" << std::endl;

    this->hit_points = rhs.hit_points;
    this->max_hit_points = rhs.max_hit_points;
    this->energy_points = rhs.energy_points;
    this->max_energy_points = rhs.max_energy_points;
    this->level = rhs.level;
    this->name = rhs.name;
    this->melee_attack_damage = rhs.melee_attack_damage;
    this->ranged_attack_damage = rhs.ranged_attack_damage;
    this->armor_damage_reduction = rhs.armor_damage_reduction;

    return *this;
}
