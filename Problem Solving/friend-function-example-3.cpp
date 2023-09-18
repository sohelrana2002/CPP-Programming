#include<iostream>
using namespace std;
class  base
{
    int val1,val2;
   public:
    void get()
    {
      cout<<"This is an example of Friend Function:" ;
      cout<<"\nEnter two values:\n";
      cin>>val1>>val2;
    }
    friend float mean(base ob);
};
float mean(base ob)
{
    float result = (ob.val1+ob.val2)/2;
   return result;
}
 main()
{
    base obj;
    obj.get();
    cout<<"\nMean value is : "<<mean(obj);
}
