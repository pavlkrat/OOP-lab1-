#pragma once
#include "Gun.h"
class Shotgun :
    public Gun
{
public:
    Shotgun();
    Shotgun(std::string name, std::string vendor, float damage, int maxAmmo, int shotSize);

    ~Shotgun() override = default;

    void setShotSize(int shotSize);
protected:
    int shotSize;
private:
    void Aim() override;
    void Shoot() override;
};
