//DIFFERNT TYPE OF CONSTRUCTOR IN SQUARE CLASS
#include <iostream>
using namespace std;

class Square
{
    int side;

public:
    Square()
    {
        side = 2;
    }
    Square(int a)
    {
        side = a;
    }
    int area()
    {
        return side * side;
    }
};

int main()
{
    Square z, z1(3);
     cout << "Area: " << z.area() <<endl;
     cout << "Area: " <<z1.area() <<endl;

     return 0;
}
