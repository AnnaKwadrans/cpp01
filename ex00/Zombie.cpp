#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie " << _name << ": constructor called" << std::endl;
    return ;
}
Zombie::~Zombie(void)
{
    std::cout << "Zombie " << _name << ": destructor called" << std::endl;
    return ;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

