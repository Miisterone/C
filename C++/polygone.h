#ifndef C___POLYGONE_H
#define C___POLYGONE_H

#include <vector>
#include <math.h>

using namespace std;

class Polygone {
    vector<Point>cord;
public:
    void addPoint(Point p);
    int length();
    void addPoint(int p);
};

void Polygone::addPoint(Point p) {
    cord.push_back(p);
}

int Polygone::length(){
    int result;
    for (int i = 0; i < cord.size(); ++i) {
        if (i == cord.size()-1) {
            result += sqrt(pow(cord[cord.size()-1].getX()- cord[0].getX(), 2) + pow((cord[cord.size()-1].getY()- cord[0].getY()), 2));
        } else {
            result += sqrt(pow(cord[i].getX()- cord[i+1].getX(), 2) + pow((cord[i].getY()- cord[i+1].getY()), 2));
        }
    }
    return result;
}
#endif
