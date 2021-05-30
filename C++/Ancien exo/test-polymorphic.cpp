#include <iostream>
using namespace std;

class A{
public:
    virtual void show(){
        cout << "Je suis A" << endl;
    }

};

class B: public A{
public:
    virtual void show(){
        cout << "Je suis B" << endl;
    }
};


void affiche(A& a){
    a.show();
}

//int main(){
//
//    A a;
//    B b;
//
//    affiche(a);
//    affiche(b);
//
//    return 0;
//}