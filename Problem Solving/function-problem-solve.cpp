#include<iostream>
using namespace std;
//prototype start
int sum(int x, int y);
void large(int x, int y);
void odd(int x);
void even(int y);

int main(){
    int a,b;

    cout<< "Enter two integer number : ";
    cin >>a >> b;//user input

    cout << "Sum = " <<sum(a,b) <<endl;
    large(a,b);
    odd(a);
    even(b);


}

int sum(int x, int y){
    int sum = x+y;
    return sum;
}

void large(int x, int y){
    if(x>y){
        cout << "1st number is largest" <<endl;
    }
    else{
        {
        cout << "2nd number is largest" <<endl;
    }
    }
}
void odd(int x){
    if(x%2==1){
        cout<< "1st number is odd" <<endl;
    }
    else{
        {
        cout<< "1st number is even" <<endl;
    }
    }
}


void even(int y){
    if(y%2==0){
        cout<< "2nd number is even" <<endl;
    }
    else
    {

        cout<< "2nd number is odd";

    }
}











