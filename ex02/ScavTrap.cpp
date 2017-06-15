#include "ScavTrap.hpp"

ScavTrap::ScavTrap( ScavTrap const & src) : ClapTrap(src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

ScavTrap::ScavTrap(std::string mName) : ClapTrap(mName)
 {

     this->hit_points = 100;
     this->max_hit_points = 100;
     this->energy_points = 50;
     this->max_energy_points = 50;
     this->level = 1;
     this->name = mName;
     this->melee_attack_damage = 20;
     this->ranged_attack_damage = 15;
     this->armor_damage_reduction = 3;

    std::cout << "SC4V-LTX "<< this->name << " initialized and is beautifull :)"<< std::endl;
    return;
}

ScavTrap::~ScavTrap(void){
    std::cout << "SC4V-LTX "<< this->name << " destroyed sad time...................... :("<< std::endl;
    return;
}

void ScavTrap::challengeNewcomer(void){
        std::string temp[5] = {"Bucket Challenge : WATER ON YOU", "ICE CREAM : 100x ice cream in 2 min", "TOP ELO : climb LoL Ladder", "Pro elobosst: Boost 14 Bronze in 1 week", "Imagination : create challenge is too hard.."} ;
        int myRand = std::rand()%5;
        std::string name = temp[myRand];
        std::cout << "SC4V-LTX "<< this->name << " USEEEEE RANNDOOMMM CHALLENGEEEEEE and get : "<< name << std::endl;
}


ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
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
