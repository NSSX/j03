#include "NinjaTrap.hpp"

int main(void){

    srand(time(NULL));

    FragTrap fragtrap("myFragTrap");
    ScavTrap scavtrap("myScavTrap");
    NinjaTrap ninjaTrap("myNinjaTrap");
    NinjaTrap ninjaTrap2("mySecondNinjaTrap");

    ninjaTrap.ninjaShoebox(fragtrap);
    ninjaTrap.ninjaShoebox(scavtrap);
    ninjaTrap.ninjaShoebox(ninjaTrap2);

    return (0);
}
