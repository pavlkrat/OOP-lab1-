#include "Axe.h"

void Axe::Razmah()
{
	std::cout << "AXE razmah with: " << name << "\n";
}

void Axe::Hit()
{
	std::cout << "AXE hit with: " << name << " on " << damage << " damage\n";
}

Axe::Axe()
{
	deltaDMG = 10;
}

Axe::Axe(std::string name, std::string vendor, float damage, float length, float cutSpeed) :Cold(name, vendor, damage, length)
{
	deltaDMG = 10;
	this->cutSpeed = std::max(cutSpeed, 1.f);
}

void Axe::CutTree(float treeSize)
{
	treeSize = std::max(treeSize, 0.f);
	int number = std::ceil(treeSize / cutSpeed - eps);
	for (int i = 0;i < number;i++)
	{
		Razmah();
		std::cout << "AXE: " << name << " hit the tree\n";
	}
	std::cout << "AXE: " << name << " CUT OFF the tree\n";
}

void Axe::Ensharp()
{
	damage += deltaDMG;
	cutSpeed += deltaSHRP;
}
