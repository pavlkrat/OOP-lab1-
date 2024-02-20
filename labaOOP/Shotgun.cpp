#include "Shotgun.h"

void Shotgun::Aim()
{
	std::cout << "aimed with SHOTGUN " << name << "\n";
}

void Shotgun::Shoot()
{
	int possible = std::min(shotSize, curAmmo);
	curAmmo -= possible;
	std::cout << "shot with SHOTGUN " << name << " x" << possible << " bullets, total damage: " << damage * possible << " " << curAmmo << " bullets left\n";
}

Shotgun::Shotgun()
{
	shotSize = curAmmo = maxAmmo = 2;
}

Shotgun::Shotgun(std::string name, std::string vendor, float damage, int maxAmmo, int shotSize) : Gun(name, vendor, damage, maxAmmo)
{
	curAmmo = this->maxAmmo = std::max(maxAmmo, 2);
	this->shotSize = std::min(std::max(shotSize, 2), this->maxAmmo);
}

void Shotgun::setShotSize(int shotSize)
{
	this->shotSize = std::min(std::max(shotSize, 2), maxAmmo);
}
