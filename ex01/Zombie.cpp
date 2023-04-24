#include "Zombie.hpp"

void Zombie::announce( void ){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << "\n";
}

// Zombie::Zombie(std::string zomb_name)
// {
// 	name = zomb_name;
// }

Zombie::~Zombie()
{
	std::cout << name << "\n";
}

void Zombie::nameSetter( std::string zomName ){
	name = zomName;
}