#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include <iostream>
#include <stdlib.h>
#include "Animal.h"

using namespace std;

class AnimalsInZoo{
 public:
  AnimalsInZoo(Animal a);

 AnimalsInZoo();

  void display();

 private:
  int numAnimals;
  Animal animal;
};

#endif
