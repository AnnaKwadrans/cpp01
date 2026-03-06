#include "Zombie.hpp"

int main(void)
{
    Zombie  *heap_zombie = newZombie("Zbyszek");

    randomChump("Rysiek");

    heap_zombie->announce();
    delete heap_zombie;

    return (0);
}
