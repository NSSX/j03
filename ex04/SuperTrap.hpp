#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <ctime>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public  virtual FragTrap, public virtual NinjaTrap{

public:

    void vaulthunter_dot_exe(std::string const & target);

    SuperTrap(std::string mName);
    SuperTrap( SuperTrap const & src);
    ~SuperTrap(void);

    SuperTrap & operator=(SuperTrap const & rhs);

private:

};

#endif
