#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>

class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string zomb_name);
		~Zombie();
		void announce( void );
		void randomChump( std::string name );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif