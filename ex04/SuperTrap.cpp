#include "SuperTrap.hpp"

SuperTrap::SuperTrap( SuperTrap const & src) : FragTrap(src) , NinjaTrap(src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

SuperTrap::SuperTrap(std::string mName) : FragTrap(mName) , NinjaTrap(mName)
 {
     this->hit_points = 100;
     this->max_hit_points = 100;
     this->energy_points = 100;
     this->max_energy_points = 100;
     this->level = 1;
     this->name = mName;
     this->melee_attack_damage = 30;
     this->ranged_attack_damage = 20;
     this->armor_damage_reduction = 5;

    std::cout << "SUPERTR4P-XXX "<< this->name << " initialized"<< std::endl;
    return;
}

SuperTrap::~SuperTrap(void){
    std::cout << "SUPERTR4P-XXX "<< this->name << " destroyed"<< std::endl;
    return;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs){
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
