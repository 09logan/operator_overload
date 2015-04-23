#include <iostream>
#include "Points.h"
using namespace std;
Points::Points()
{
    setX(0);
    setY(0);
}
Points::Points(int a,int b)
{
    setX(a);
    setY(b);
}
void Points::setX(int a)
{
    x=a;
}
void Points::setY(int b)
{
    y=b;
}
int Points::getX()
{
    return x;
}
int Points::getY()
{
    return y;
}
void Points::setXY(int a,int b)
{
    x=a;
    y=b;
}
void Points::print()
{
cout<<"("<<x<<","<<y<<")\n";
}
Points Points::operator+(Points rp) const
{
    Points program;
    program.setX(x+rp.getX());
    program.setY(y+rp.getY());
    return program;
}





