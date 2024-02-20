#include "Gun.h"

Gun::Gun(std::string name, std::string vendor, float damage, int maxAmmo) :Weapon(name, vendor, damage)
{
	curAmmo = this->maxAmmo = std::max(maxAmmo, 1);
}

std::pair<int, int> Gun::AmmoInfo()
{
	return {curAmmo, maxAmmo};
}

int Gun::Charge(int source)
{
	int need = maxAmmo - curAmmo;
	int possible = std::max(std::min(source, need), 0);
	curAmmo += possible;
	std::cout << name << " after charging has " << curAmmo << " of " << maxAmmo << " bullets\n";
	return possible;
}

void Gun::Attack()
{
	Aim();
	if (curAmmo == 0)
	{
		NoAmmoLogic();
		return;
	}
	Shoot();
}

void Gun::NoAmmoLogic()
{
	std::cout << name << " tried to shoot, but no ammo\n";
}