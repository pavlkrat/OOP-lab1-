#include "Pistol.h"

void Pistol::Aim()
{
	std::cout << "aimed with PISTOL " << name << "\n";
}

void Pistol::Shoot()
{
	curAmmo--;
	std::cout << damage << " DMG shot with PISTOL " << name << " " << curAmmo << " bullets left\n";
}

void Pistol::PreventBlockLogic()
{
	std::cout << "PISTOL " << name << " tried to shoot, but prevent blocked\n";
}

Pistol::Pistol(std::string name, std::string vendor, float damage, int maxAmmo) :Gun(name, vendor, damage, maxAmmo) {}

void Pistol::PreventOn()
{
	if (isPrevented)
		return;
	isPrevented = true;
	std::cout << "PISTOL " << name << " now prevented\n";
}

void Pistol::PreventOff()
{
	if (!isPrevented)
		return;
	isPrevented = false;
	std::cout << "PISTOL " << name << " no more prevented\n";
}

void Pistol::Attack()
{
	Aim();
	if (isPrevented)
	{
		PreventBlockLogic();
		return;
	}
	if (curAmmo == 0)
	{
		NoAmmoLogic();
		return;
	}
	Shoot();
}
