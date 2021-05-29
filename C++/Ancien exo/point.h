#ifndef C___POINT_H
#define C___POINT_H

#include <iostream>

using namespace std;

class Point {
    int p_x;
    int p_y;
public:
    void setXY(int x, int y);
    void show() const;
    int getX(){
        return p_x;
    }
    int getY(){
        return p_y;
    }
};
void Point::setXY(int x, int y) {
    p_x = x;
    p_y = y;
}

void Point::show() const {
    cout << "X:" << p_x << "Y:" << p_y << endl;
}

#endif
