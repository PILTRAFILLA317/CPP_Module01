#include "Weapon.hpp"
#include "HumanB.hpp"

void HumanB::attack(void){
	std::cout << name << " attacks with their " << weapon->getType() << "\n";
}

HumanB::HumanB(std::string _name){
	name = _name;
}

void HumanB::setWeapon(Weapon &weapon_){
	weapon = &weapon_;
}