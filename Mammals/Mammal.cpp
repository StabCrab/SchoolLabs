//
// Created by trykr on 07.11.2018.
//

#include <iostream>
using namespace std;

#include "Mammal.h"
Mammal::Mammal()
{
    hp = 100;
    speed = 1.0;
    cout << "Mammal has been born" << endl;
}
Mammal::~Mammal()
{
    cout << "Mammal has been gone" << endl;
}
void Mammal::breathe()
{
    cout << " breathing" << endl;
}
void Mammal::talk()
{
    cout << "Mammal said : " << endl;
}