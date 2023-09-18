//Multiply three objects by using passing and returning object
#include <iostream>
using namespace std;

class Multiply
{
    private:
        int a, b, c;
    public:
        void input(){
            cout << "Enter your 3 numbers: " <<endl;
            cin >> a >> b >> c;
        }
        Multiply multiplyWorking(Multiply x, Multiply y, Multiply z){
            Multiply tempObj;
            tempObj.a = x.a*y.a*z.a;
            tempObj.b = x.b*y.b*z.b;
            tempObj.c = x.c*y.c*z.c;
            return tempObj;
        }
        void output(Multiply i){
            cout << "The Multipulation is A = " <<i.a << "\nB = " <<i.b <<"\nC = " <<i.c <<endl;
        }
};

int main()
{
    Multiply obj1, obj2, obj3, result;
        obj1.input();
        obj2.input();
        obj3.input();
        result.output(result.multiplyWorking(obj1, obj2, obj3));

        return 0;
}

