//
// Created by trykr on 07.11.2018.
//

#include <iostream>
#include "Human.h"
Human::Human() {
    cout << "The human";
    speed = 2.0;
    civilized = true;
}
Human::~Human(){cout <<"RIP Human";}
void Human::talk() { cout << "I like memes" << endl;}
void Human::walk() {cout << "Left, Right using speed" << speed << endl;}
void Human::attack(Human & other)
{
    if(civilized)
        cout << "Fuck you man, I wont do that" << endl;
    else
        cout <<"Tikay s gorodu, tobi pizda" << endl;
}