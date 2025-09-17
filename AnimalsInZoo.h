#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include <iostream>
#include <stdlib.h>
#include "Animal.h"

using namespace std;

class AnimalsInZoo{
	public:
		//Constructors
  		AnimalsInZoo();

		AnimalsInZoo(unsigned int initial_capacity);

		//Methods Below
  		bool store(Animal &another_anima);

		bool remove(const string &animal_name);

		Animal find(const string &animal_name);

		void readSizes(unsigned int &count, unsigned int &capacity);

		void show() const;

		unsigned int makeSpace(unsigned int how_many);

 	private:
  		
		Animal* animals;
  		unsigned int zooCapacity;
  		unsigned int animalCount;
};

#endif
