#include <iostream>
using namespace std;
class one{
public:
    virtual void show(){
    cout<<"from one\n";
    }
};
class two:public one{
public:
    void show(){
    cout<<"from two\n";
    }
 void display(){
    cout<<"additional function\n";
    }};
int main()
{
    one *o;
    two *t,t2;
    o=&t2;///upcasting
    o->show();
    t=(two*)&o;///downcasting
    t->display();

    return 0;
}
