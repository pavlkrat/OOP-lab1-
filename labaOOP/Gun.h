#pragma once
#include "Weapon.h"
class Gun :
    public Weapon
{
public:
    Gun() = default;
    Gun(std::string name, std::string vendor, float damage, int maxAmmo);

    ~Gun() override = default;

    std::pair<int, int> AmmoInfo();
    int Charge(int source);
    void Attack() override;
protected:
    int curAmmo = 1, maxAmmo = 1;

    void NoAmmoLogic();
private:
    virtual void Aim() = 0;
    virtual void Shoot() = 0;
};
