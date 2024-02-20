#include "Sword.h"

void Sword::Razmah()
{
	std::cout << "SWORD razmah with: " << name << "\n";
}

void Sword::Hit()
{
	std::cout << "SWORD hit with: " << name << " on " << damage << " damage\n";
}

Sword::Sword()
{
	deltaDMG = 5;
}

Sword::Sword(std::string name, std::string vendor, float damage, float length) :Cold(name, vendor, damage, length)
{
	deltaDMG = 5;
}

void Sword::StartParry()
{
	if (isParried)
		return;
	isParried = true;
	std::cout << "SWORD " << name << " now in parry mode\n";
}

void Sword::StopParry()
{
	if (!isParried)
		return;
	isParried = false;
	std::cout << "SWORD " << name << " no more in parry mode\n";
}

void Sword::Attack()
{
	StopParry();
	Razmah();
	Hit();
}
