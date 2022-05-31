#include <iostream>
#include <list>
using namespace std;

class Animal {
public:
    void animalSound() {
        std::cout << "The animal makes a sound \n";
    }
};

class Pig : public Animal {
public:
    void animalSound() {
        std::cout << "The pig makes the sound: wee wee \n";
    }
};

class Dog : public Animal {
public:
    void animalSound() {
        std::cout << "The dog makes the sound: bow wow \n";
    }
};


class Cat: public Animal {
public:
    void animalSound() {
        std::cout << "The cat makes the sound: miau miau \n";
    }
};

int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    Cat myCat;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    myCat.animalSound();

    std::list<Animal*>listOfClasses;

    listOfClasses.push_back(new Pig());
    listOfClasses.push_back(new Dog());
    listOfClasses.push_back(new Cat());

    for (auto p : listOfClasses)
    {
        return 0;
    }}


