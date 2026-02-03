// pattern print using recursive way 

#include <iostream>
using namespace std;

void printPattern(int n){
    if(n == 0)
        return;

    printPattern(n - 1);

    for (int i = 0; i < n; i++){
        cout << "* ";
    }

    cout << endl;
}

int main(){
    int n;
    cout << "Enter pattern number: ";
    cin >> n;

    printPattern(n);

    return 0;
}