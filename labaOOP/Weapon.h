#include <string>
#include <iostream>
#pragma once
class Weapon
{
public:
	Weapon() = default;
	Weapon(std::string name, std::string vendor, float damage);

	virtual ~Weapon() = default;

	float getDamage();
	std::string getName();
	std::string getVendor();

	void setDamage(float damage);
	void setName(std::string name);

	virtual void Attack() = 0;
	virtual std::string ToString();
protected:
	float damage = 0;
	std::string name = "unnamed";
	std::string vendor = "?";
};
