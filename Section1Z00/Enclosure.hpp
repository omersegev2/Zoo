#ifndef _ENCLOSURE_H_
#define _ENCLOSURE_H_
#include "Animal.hpp"

class Enclosure
{
private:
    string id;
    int num_of_animals;
    Animal* animals;
    void* zoo_keeper;
public:
    Enclosure(string id = "none", int num = 0) : id(id), num_of_animals(num){};
    //~Enclosure();
    void AddAnimal(Animal animal);
    void RemoveAnimal(Animal animal);
    Animal* GetAnimals(){return this->animals;}
    void SetZooKeeper(void* zooKeeper);
    string GetID(){return this->id;}
    void Set_Id(string id){this->id = id;}
    void displayAnimals()const;
    int GetNumOfAnimals(){return num_of_animals;}
};

#endif