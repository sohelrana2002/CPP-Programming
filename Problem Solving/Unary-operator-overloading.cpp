// unary_operator_overloading.cpp
#include <iostream>
using namespace std;

class check_count
 {
   public:
     int count_plus;
     int count_minus;

     check_count()
     {
       count_plus = 0;
       count_minus = 2;
     }
     void operator ++() { ++count_plus; } // count increment
     void operator --() { --count_minus; } // count decrement
 };
int main()
 {
   check_count x, y; //creating objects

   //before increment/decrement
   cout << "x =" << x.count_plus<<"\n";
   cout <<"y =" << y.count_minus<<"\n";

   ++x;
   --y;

   //after increment/decrement
   cout<<"\nAfter increment/decrement\n";
   cout<<"x ="<<x.count_plus<<"\n";
   cout<<"y ="<<y.count_minus<<"\n";
 return 0;
}