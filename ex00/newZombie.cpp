#include "Zombie.hpp"

/*This function creates a zombie, names it, and returns it so you can use it outside
of the function scope.*/
Zombie* Zombie::newZombie( std::string name )
{
    Zombie *new_zombie;

    new Zombie;
    *new_zombie._name = name;

    return (new_zombie);
}
