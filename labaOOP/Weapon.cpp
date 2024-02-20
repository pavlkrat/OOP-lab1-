#include "Weapon.h"

Weapon::Weapon(std::string name, std::string vendor, float damage)
{
	this->name = std::move(name);
	this->vendor = std::move(vendor);
	this->damage = std::max(damage, 0.f);
}

float Weapon::getDamage()
{
	return damage;
}

std::string Weapon::getName()
{
	return name;
}

std::string Weapon::getVendor()
{
	return vendor;
}

void Weapon::setDamage(float damage)
{
	this->damage = std::max(damage, 0.f);
}

void Weapon::setName(std::string name)
{
	this->name = name;
}

std::string Weapon::ToString()
{
	std::string bound = "-----------------------\n";
	std::string stype = "type: " + std::string(typeid(*this).name()) + '\n';
	std::string sname = "name: " + name + '\n';
	std::string svendor = "vendor: " + vendor + '\n';
	std::string sdamage = "damage: " + std::to_string(damage) + '\n';
	return bound + stype + sname + svendor + sdamage + bound;
}
