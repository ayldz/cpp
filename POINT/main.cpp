//POINT.CPP
#include <iostream>
using namespace std;

struct Point
{
    int x,y;
};

int main()
{
    Point p1, p2;

    cout << "Enter cordinates for p1 : ";cin >> p1.x >> p1.y;
    cout << "Enter cordiantes for p2 : ";cin >> p2.x >> p2.y;

    Point p3 = {p1.x+p2.x , p1.y+p2.y};

    cout << "Cordinates of p1 + p2 : " << p3.x << ", " << p3.y << endl;

    return 0;
}

