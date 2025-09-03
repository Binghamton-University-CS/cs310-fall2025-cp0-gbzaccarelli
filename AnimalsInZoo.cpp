
#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal a) {
	numAnimals = 1;
	animal = a;
}

AnimalsInZoo::AnimalsInZoo(){
	numAnimals = 0;
	Animal animal = Animal();
}

void AnimalsInZoo::display() {
    cout << numAnimals << endl;
    if(numAnimals == 1){
	    animal.display();
    }
}

