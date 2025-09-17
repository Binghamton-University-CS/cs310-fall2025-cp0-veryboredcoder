#include <iostream>

#include "AnimalsInZoo.h"

using namespace std;

//Constructors defined
AnimalsInZoo::AnimalsInZoo() {
	zooCapacity = 1;
	animalCount = 0;
	animals = new Animal[zooCapacity];
}

AnimalsInZoo::AnimalsInZoo(unsigned int initial_capacity) {
	if(initial_capacity == 0)
		zooCapacity = 1;
	else
		zooCapacity = initial_capacity;
	animalCount = 0;
	animals = new Animal[zooCapacity];
}

//Methods defined below
bool AnimalsInZoo::store(Animal &another_animal){

	if(zooCapacity == animalCount){
		
		zooCapacity = zooCapacity*2;

		Animal* newArr = new Animal[zooCapacity];

		for(unsigned int i = 0; i < animalCount; ++i){
			newArr [i] = animals[i];
		}

		delete[] animals;
		animals = newArr;

	}

	animals[animalCount] = another_animal;

	cout << "Animal " << another_animal.get_name() << " added to spot ";
	cout << animalCount << " of the continued array." << endl;

	++animalCount;

	return true;
}

bool AnimalsInZoo::remove(const string &animal_name) {
	for(unsigned int i = 0; i < animalCount; ++i) {
		if(animals[i].get_name() == animal_name) {
			for(unsigned int j = i; j < animalCount-1; ++j) 
				animals[j] = animals[j+1];
			--animalCount;
			animals[animalCount] = Animal();
			return true;
		}
	}	

	cout << "Animal " << animal_name << " not found" << endl;
	return false;
}

Animal AnimalsInZoo::find(const string &animal_name){
	for(unsigned int i = 0; i < animalCount; ++i) {
		if(animals[i].get_name() == animal_name)
			return animals[i];
	}
	return Animal();
}

void AnimalsInZoo::readSizes(unsigned int &count, unsigned int &capacity){
	count = animalCount;
	capacity = zooCapacity;
}

void AnimalsInZoo::show() const{
	for(unsigned int i = 0; i < animalCount; ++i){
		cout << i << ": ";
		animals[i].display();
	}
}

unsigned int AnimalsInZoo::makeSpace(unsigned int how_many = 0) {
	if(how_many != 0) {
		zooCapacity = zooCapacity + how_many;
		Animal* newArr = new Animal[zooCapacity];
		for(unsigned int i = 0; i < animalCount; ++i) 
			newArr[i] = animals[i];
		delete [] animals;
		animals = newArr;
		return how_many;
	}
	else {
		int output = zooCapacity;
		zooCapacity = zooCapacity*2;
		Animal* newArr = new Animal[zooCapacity];
		for(unsigned int i = 0; i < animalCount; ++i) 
			newArr[i] = animals[i];
		delete [] animals;
		animals = newArr;
		return output;
	}
}
