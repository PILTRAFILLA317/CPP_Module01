#include "Zombie.hpp"

int	main(int ac, char **av)
{
	if (ac <= 1 || ac > 3)
		return (0);
	int N = atoi(av[1]);
	std::string str(av[2]);
	Zombie *zomb = zombieHorde(N, str);
	delete[] zomb;
	return (0);
}