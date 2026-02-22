#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie: constructor called" << std::endl;
    return ;
}
Zombie::~Zombie(void)
{
    std::cout << "Zombie: destructor called" << std::endl;
    return ;
}

void Zombie::announce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void    Zombie::set_name(std::string name)
{
    _name = name;
    return ;
}
