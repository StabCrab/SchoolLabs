//
// Created by trykr on 07.11.2018.
//

#ifndef SCHOOLLABS_HUMAN_H
#define SCHOOLLABS_HUMAN_H

#include "Mammal.h"
class Human : public Mammal
{
    bool civilized;
public:
    Human();
    ~Human();
    virtual  void talk() override;
    virtual  void walk() override;
    void attack(Human & other);
};
#endif //SCHOOLLABS_HUMAN_H
