#pragma once
#include "Cold.h"
class Sword :
    public Cold
{
public:
    Sword();
    Sword(std::string name, std::string vendor, float damage, float length);

    ~Sword() override = default;

    void StartParry();
    void StopParry();
    void Attack() override;
private:
    bool isParried = false;

    void Razmah() override;
    void Hit() override;
};
