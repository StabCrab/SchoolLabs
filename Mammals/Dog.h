//
// Created by trykr on 07.11.2018.
//

#ifndef SCHOOLLABS_DOG_H
#define SCHOOLLABS_DOG_H

#include "Mammal.h"
#include <iostream>
class Dog : public Mammal
{
public:
    Dog();
    ~Dog();
    virtual void talk() override;
    virtual  void walk() override;
};


#endif //SCHOOLLABS_DOG_H
