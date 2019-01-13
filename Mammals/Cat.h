//
// Created by trykr on 07.11.2018.
//

#ifndef SCHOOLLABS_CAT_H
#define SCHOOLLABS_CAT_H
#include "Mammal.h"
#include <iostream>
class Cat : public Mammal
{
public:
    Cat();
    ~Cat();

    void talk() override;
    void walk() override;
};
#endif //SCHOOLLABS_CAT_H
