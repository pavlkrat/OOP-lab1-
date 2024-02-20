#pragma once
#include "Weapon.h"
class Cold :
    public Weapon
{
public:
    Cold() = default;
    Cold(std::string name, std::string vendor, float damage, float length);

    ~Cold() override = default;

    float getLength();

    void Attack() override;
    virtual void Ensharp();
protected:
    float deltaDMG = 0;
    float length = 0.5;
private:
    virtual void Razmah() = 0;
    virtual void Hit() = 0;
};
