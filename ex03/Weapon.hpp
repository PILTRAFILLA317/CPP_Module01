#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <cctype>


class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string _type);
		Weapon(){};
		~Weapon(){};
		const std::string &getType();
		void setType(std::string _type);
};

#endif