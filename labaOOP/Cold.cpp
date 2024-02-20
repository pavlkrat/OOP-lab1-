#include "Cold.h"

Cold::Cold(std::string name, std::string vendor, float damage, float length) :Weapon(name, vendor, damage)
{
	this->length = std::max(length, 0.f);
}

float Cold::getLength()
{
	return length;
}

void Cold::Attack()
{
	Razmah();
	Hit();
}

void Cold::Ensharp()
{
	damage += deltaDMG;
}
