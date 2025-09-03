
#include <string>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
   public:
      AnimalsInZoo(Animal animal);
      AnimalsInZoo();
      void display();

   private:
      unsigned int numAnimals;
      Animal animal;
};
