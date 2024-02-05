#include<iostream>
using namespace std;

int main(){
    int rowSize, i, j;
    cout << "Enter size of row: ";
    cin >> rowSize;

    for(i = 0; i <= rowSize;i++){
        int asciiValue = 65;
        for(j = 0; j <= i; j++){
            char c = char(asciiValue);
            cout << c << " ";
            asciiValue++;
        }
        cout << endl;
    }
}