#include "Replace.hpp"

void Replace(std::string linea, char *org, std::string s1, std::string s2)
{
	std::ofstream ofs(org + std::string(".replace"), std::ios::app);
	size_t index = linea.find(s1);
	if (index != linea.npos)
	{
		linea.erase(index, s1.size());
		linea.insert(index, s2);
	}
	ofs << linea << "\n";
}