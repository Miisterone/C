#include "IAnimal.h"
#include "Aigle.h"
#include "Poule.h"
#include "Tigre.h"
#include "Zoo.h"

#include <iostream>
#include <vector>

using namespace std;

typedef vector<IAnimal *> AnimalList;
typedef AnimalList::iterator AnimalinZoo;

void feu(char feu) {
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
        AnimalinZoo it = v.begin();
        while(it != v.end()){
            if (it <= v.end()-3){
                (*it)->show();
            }
            delete(*it);
            it++;
            if ((*it)->type() == "Aigle"){
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
    feu(1);
    return 0;
}
