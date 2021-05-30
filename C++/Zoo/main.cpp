#include "IAnimal.h"
#include "Aigle.h"
#include "Poule.h"
#include "Tigre.h"

#include <iostream>
#include <vector>

using namespace std;

typedef vector<IAnimal *> AnimalList;
typedef AnimalList::iterator AnimalIterator;

void Zoo(char feu) {
    int animaux = 0;
    AnimalList v;
    for (size_t i=0;i<2;i++) {
        v.push_back(new Tigre);
        animaux++;
        v.push_back(new Poule);
        animaux++;
        v.push_back(new Aigle);
        animaux++;
    }
    if (feu == 1) {
        cout << "IL Y A LE FEU!!!" << endl;
        AnimalIterator it = v.begin();
        while(it != v.end()){
            if (it == v.end()-6 || it == v.end()-5 || it == v.end()-4){
                (*it)->show();
            }
            delete(*it);
            it++;
            animaux--;
            if (it == v.end()-2){
                it++;
                animaux--;
            }
            if (it == v.end()-1){
                it++;
                animaux--;
            }
        }
        cout << "NB d'animaux en vie: " << IAnimal::getCount() << endl;
        cout << "NB d'animaux dans le zoo: " << animaux << endl;
    } else{
        cout << "NB d'animaux en vie: " << IAnimal::getCount() << endl;
        cout << "NB d'animaux dans le zoo: " << animaux << endl;
    }
}

int main() {
    Zoo(1);
    return 0;
}