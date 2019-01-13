#include <iostream>
#include "Mammal.h"
#include "Dog.h"
#include "Cat.h"
#include "Human.h"

using namespace std;


int main()
{
    Human human;
    human.breathe();
    human.talk();
    human.walk();

    Cat cat;
    cat.breathe();
    cat.talk();
    cat.walk();

    Dog dog;
    dog.breathe();
    dog.talk();
    dog.walk();
}