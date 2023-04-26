#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA {
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA(){};
		void attack(void);
};

#endif