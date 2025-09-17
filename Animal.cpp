#include <iostream>

#include "Animal.h"
#include <string>

using namespace std;

//Constructor (3 parameters) defined
Animal::Animal(string n, float w, bool d) {
	animalName = n;
	weight = w;
	isDangerous = d;
}

//default
Animal::Animal(){
	animalName = "";
	weight = 0;
	isDangerous = false;
}

//Accessor Methods Defined below
string Animal::get_name() const{
	return animalName;
}

void Animal::display(){
	cout << animalName << ", " << weight << " lbs";
	if(isDangerous)
		cout << " be careful!" << endl;
	else
		cout << endl;
}
