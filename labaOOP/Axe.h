#pragma once
#include "Cold.h"
class Axe :
    public Cold
{
public:
    Axe();
    Axe(std::string name, std::string vendor, float damage, float length, float cutSpeed);

    ~Axe() override = default;

    void CutTree(float treeSize);
    void Ensharp() override;
private:
    const float eps = 1e-6;
    float deltaSHRP = 10;
    float cutSpeed = 0;

    void Razmah() override;
    void Hit() override;
};
