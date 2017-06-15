#include "FragTrap.hpp"

FragTrap::FragTrap( FragTrap const & src) : ClapTrap(src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

FragTrap::FragTrap(std::string mName) : ClapTrap(mName)
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


    std::cout << "FR4G-TP "<< this->name << " initialized"<< std::endl;
    return;
}

FragTrap::~FragTrap(void){
    std::cout << "FR4G-TP "<< this->name << " destroyed"<< std::endl;
    return;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target){

    if(this->energy_points - 25 < 0){
            std::cout << "FR4G-TP "<< this->name << " dont have enough energy to launch vaulthunder attack"<< std::endl;
    }
    else{
        this->energy_points -= 25;
        std::string temp[10] =  {"end of world" , "disapear" , "ultimate","double cut", "triple cut", "finisher", "jump", "bullet", "burning", "extermination"};

        int myRand = std::rand()%10;
        std::string name = temp[myRand];
        int dmg[10] = {10,20,30,40,50,60,70,80,90,100};
        int mydmg = dmg[myRand];

        std::cout << "FR4G-TP "<< this->name << " attacks "<< target << " using " << name << " attack, causing "<< mydmg << " points of damage !" << std::endl;
    }
}

FragTrap & FragTrap::operator=(FragTrap const & rhs){
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
