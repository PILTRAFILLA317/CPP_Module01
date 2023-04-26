#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

std::string Weapon::getType(){
	return (type);
}

Weapon::Weapon(std::string _type){
	type = _type;
}

void Weapon::setType(std::string _type){
	type = _type;
}