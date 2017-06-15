#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public:

    void challengeNewcomer(void);

    ScavTrap(std::string mName);
    ScavTrap( ScavTrap const & src);
    ~ScavTrap(void);

    ScavTrap & operator=(ScavTrap const & rhs);

private:

};

#endif
