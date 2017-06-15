#include "ScavTrap.hpp"

ScavTrap::ScavTrap( ScavTrap const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

ScavTrap::ScavTrap(std::string mName) : hit_points(100), max_hit_points(100),
energy_points(50),
max_energy_points(50),
level(1),
name(mName),
melee_attack_damage(20),
ranged_attack_damage(15),
armor_damage_reduction(3)
 {
    std::cout << "SC4V-LTX "<< this->name << " initialized and is beautifull :)"<< std::endl;
    return;
}

ScavTrap::~ScavTrap(void){
    std::cout << "SC4V-LTX "<< this->name << " destroyed sad time...................... :("<< std::endl;
    return;
}

void ScavTrap::rangedAttack(std::string const & target){
    std::cout << "SC4V-LTX "<< this->name << " attacks "<< target << " at range, causing an insane " << this->ranged_attack_damage << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target){
    std::cout << "SC4V-LTX "<< this->name << " attacks "<< target << " at melee, causing an insane " << this->melee_attack_damage << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){

    if(this->hit_points > 0){
        int realAmount = amount - this->armor_damage_reduction;
        if(realAmount < 0)
        {
            realAmount = 0;
        }
        std::cout << "SC4V-LTX "<< this->name << " taking "<< realAmount << " damage ... stop that" << std::endl;
        this->hit_points -= realAmount;
        if(this->hit_points < 0){
            this->hit_points = 0;
        }
        std::cout << "SC4V-LTX "<< this->name << " Current Hit Points "<< this->hit_points << std::endl;
    }
    else{
            std::cout << "SC4V-LTX "<< this->name << " already dead " << std::endl;
    }
    return;
}

void ScavTrap::beRepaired(unsigned int amount){
    if(this->hit_points >= this->max_hit_points){
        std::cout << "SC4V-LTX "<< this->name << " already full " << std::endl;
    }
    else if(this->hit_points > 0){
        int realAmount = amount;

        std::cout << "SC4V-LTX "<< this->name << " repaired "<< realAmount << " Hit points, thanks god" << std::endl;
        this->hit_points += realAmount;
        if(this->hit_points > this->max_hit_points){
            this->hit_points = this->max_hit_points;
        }
        std::cout << "SC4V-LTX "<< this->name << " Current Hit Points "<< this->hit_points << std::endl;
    }
    else{
            std::cout << "SC4V-LTX "<< this->name << " already dead " << std::endl;
    }
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
