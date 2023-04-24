#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>

class Zombie {
	private:
		std::string name;
	public:
		//Zombie(std::string zomb_name);
		Zombie(){};
		~Zombie();
		void announce( void );
		void randomChump( std::string name );
		void nameSetter( std::string zomName );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif