#include<iostream>
using namespace std;

int main(){
    int rowSize, i, j;
    cout << "Enter size of row: ";
    cin >> rowSize;

    int value = 1;
    for(i = 0; i <= rowSize;i++){
        for(j = 0; j <= i; j++){
            cout << value << " ";
        }
        value++;
        cout << endl;
    }
}