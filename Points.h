using namespace std;
class Points
{
private:
    int x;
    int y;

public:
    Points();
    Points(int x,int y);
    int getX();
    void setX(int x);
    int getY();
    void setY(int x);
    void setXY(int x,int y);
    double getMagnitude();
    double getArgument();
    void print();
    Points operator+(Points)const;
};
