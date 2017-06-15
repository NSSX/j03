#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( NinjaTrap const & src) : ClapTrap(src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

NinjaTrap::NinjaTrap(std::string mName) : ClapTrap(mName)
 {
     this->hit_points = 60;
     this->max_hit_points = 60;
     this->energy_points = 120;
     this->max_energy_points = 120;
     this->level = 1;
     this->name = mName;
     this->melee_attack_damage = 60;
     this->ranged_attack_damage = 5;
     this->armor_damage_reduction = 0;

    std::cout << "NINJ4-PPOL "<< this->name << " initialized fuck yeah"<< std::endl;
    return;
}

NinjaTrap::~NinjaTrap(void){
    std::cout << "NINJ4-PPOL "<< this->name << " destroyed TT"<< std::endl;
    return;
}

void NinjaTrap::ninjaShoebox(FragTrap const & src){
    std::cout << "NINJ4-PPOL "<< this->name << " use NINJASHOEBOX on " <<  src.name << " HE IS A FRAGTRAP"<< std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & src){
    std::cout << "NINJ4-PPOL "<< this->name << " use NINJASHOEBOX on " <<  src.name << " HE IS A SCAVTRAP"<< std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & src){
    std::cout << "NINJ4-PPOL "<< this->name << " use NINJASHOEBOX on " <<  src.name << " HE IS A NINJATRAP"<< std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs){
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
