#include <iostream>
using namespace std;

class FunctionOverloading
{
     public:
    void Sum(int a, int b){
        cout<<"Double Value: " <<a+b<<endl;
    }
    void Sum(double a, int b){
        cout<< "Integer value: " << a-b<<endl ;
    }
};
    
int main()
{
    FunctionOverloading ob;
    ob.Sum(25,10);
    ob.Sum(25.5,5);
    return 0;
}
