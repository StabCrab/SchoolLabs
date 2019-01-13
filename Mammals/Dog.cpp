//
// Created by trykr on 07.11.2018.
//

#include <iostream>
using namespace std;

#include "Dog.h"
Dog::Dog()
{
    cout << "Dog";
}
Dog::~Dog()
{
    cout << "RIP Dog ";
}
void Dog::talk()
{
    cout << "Woof" << endl;
}
void Dog::walk()
{
    cout << "Left forward leg and back right leg,  right forward leg and left back leg ... using speed" << speed << endl;
}