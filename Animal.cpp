#include <iostream>

#include "Animal.h"
#include <string>

using namespace std;

Animal::Animal(string s, unsigned int year) {
  species = s;
  year_discovered = year;
}

Animal::Animal(){
  species = "";
  year_discovered = 0;
}

void Animal::display()
{
  cout << species << " [" << year_discovered << "]" << endl;
}
