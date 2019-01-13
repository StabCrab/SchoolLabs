//
// Created by trykr on 07.11.2018.
//

#ifndef SCHOOLLABS_MAMMALS_H
#define SCHOOLLABS_MAMMALS_H
#include <iostream>
using namespace std;
class Mammal
{
protected:
    int hp;
    double speed;
public:
    Mammal();

    virtual ~Mammal();
    void breathe();
    virtual  void talk();
    virtual  void walk() = 0;
};

#endif //SCHOOLLABS_MAMMALS_H
