// print pattern using normal way 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter length of pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout << string(i, '*') << " ";
        cout << endl;
    }

    

    return 0;
}