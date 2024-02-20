// labaOOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Pistol.h"
#include "Shotgun.h"
#include "Sword.h"
#include "Axe.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<Weapon*> arsenal;
    arsenal.push_back(new Axe("Ledokol2000", "nokia", 40, 1, 15));
    arsenal.push_back(new Sword("Escalibur", "poit", 100, 1.7));
    arsenal.push_back(new Shotgun("Sawed-off", "extra-weapon", 13, 12, 3));
    arsenal.push_back(new Pistol("TT", "tula", 37, 30));
    arsenal.push_back(new Axe());
    arsenal.push_back(new Shotgun());
    arsenal.push_back(new Pistol());
    arsenal.push_back(new Sword());
    for (auto i : arsenal)
        std::cout << i->ToString();
    for (auto i : arsenal)
        if (Axe* axe = dynamic_cast<Axe*> (i))
        {
            axe->CutTree(65);
            axe->Attack();
            axe->Ensharp();
            axe->CutTree(65);
            axe->Attack();
        }
        else if (Sword* sword = dynamic_cast<Sword*> (i))
        {
            sword->StartParry();
            sword->Attack();
            sword->Ensharp();
            sword->Attack();
            sword->StartParry();
            sword->StopParry();
        }
        else if (Pistol* pistol = dynamic_cast<Pistol*> (i))
        {
            pistol->PreventOn();
            pistol->Attack();
            pistol->PreventOff();
            pistol->Attack();
            pistol->Attack();
            pistol->Attack();
            pistol->Attack();
            pistol->Charge(1);
        }
        else if (Shotgun* shotgun = dynamic_cast<Shotgun*> (i))
        {
            shotgun->Attack();
            shotgun->Attack();
            shotgun->Attack();
            shotgun->Charge(2);
            shotgun->Attack();
            shotgun->Attack();
            shotgun->Attack();
        }
    for (auto i : arsenal)
        delete i;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
