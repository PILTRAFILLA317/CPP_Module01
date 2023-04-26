#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string _name);
		HumanB(){};
		~HumanB(){};
		void setWeapon(Weapon &weapon_);
		void attack(void);
};

#endif