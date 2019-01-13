//
// Created by trykr on 07.11.2018.
//
#include <iostream>
#include "Cat.h"

Cat::Cat(){cout << "Cat";}
Cat::~Cat(){ cout << "RIP Cat";}
void Cat::talk() {cout << "Meow" << endl;}
void Cat::walk() {cout << "Left forward leg and back right leg,  right forward leg and left back leg ... using speed" << speed << endl;}

