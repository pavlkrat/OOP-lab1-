#pragma once
#include "Gun.h"
class Pistol :
    public Gun
{
public:
    Pistol() = default;
    Pistol(std::string name, std::string vendor, float damage, int maxAmmo);

    ~Pistol() override = default;

    void PreventOn();
    void PreventOff();
    void Attack() override;
protected:
    void PreventBlockLogic();
private:
    bool isPrevented = false;

    void Aim() override;
    void Shoot() override;
};
