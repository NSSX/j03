#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public:

    void vaulthunter_dot_exe(std::string const & target);

    FragTrap(std::string mName);
    FragTrap( FragTrap const & src);
    ~FragTrap(void);

    FragTrap & operator=(FragTrap const & rhs);

private:

};

#endif
