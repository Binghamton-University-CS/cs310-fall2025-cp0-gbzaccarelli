#include "Animal.h"
#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   Animal animal3("Bumblebee", 20078);
   AnimalsInZoo zoo1 (animal3);

   animal2.display();
   animal1->display();
   zoo1.display();

   delete animal1;
   return 0;
}
