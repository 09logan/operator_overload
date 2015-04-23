#include <iostream>
#include "points.h"
using namespace std;

int main()
{
    Points p1(1,2);
    Points p2(4,5);
    Points p3 = p1 + p2; // (5,7)
    Points p4 = p1.operator+(p2); // (5,7)
    Points p5 = p1 + p2 + p3 + p4; // (15,21)
    p3.print();
    p4.print();
    p5.print();





}
