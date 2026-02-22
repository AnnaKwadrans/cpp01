#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {

    std::string     _name;

    Zombie(void);
    ~Zombie(void);

    void    announce(void) const;
    void    set_name(std::string name);

    public:

    Zombie* newZombie( std::string name );
    void    randomChump( std::string name );

};

#endif
