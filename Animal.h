#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <stdlib.h>

using namespace std;

class Animal{
	
	public:
		//Constructors below
		Animal();

  		Animal(string name, float heaviness, bool dangerousness);

  		//Accessor methods
  		string get_name() const;

		void display();

	private:
  		string animalName;
  		float weight;
  		bool isDangerous;
};

#endif
