#include "Replace.hpp"

int main(int ac, char **av) {

	if (ac > 4 || ac <= 0){
		std::cout << "Error" << "\n";
		return (0);
	}
	std::ifstream archivo(av[1]);
	if (!archivo.is_open()) {
		std::cout << "Error" << "\n";
		return (0);
	}
	std::string linea;
	while (std::getline(archivo, linea)) {
		Replace(linea, av[1], std::string(av[2]), std::string(av[3]));
	}
	archivo.close();
	return 0;
}
