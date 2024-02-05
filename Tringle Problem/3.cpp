#include<iostream>
using namespace std;

int main(){
    int rowSize, i, j;
    cout << "Enter size of row: ";
    cin >> rowSize;

    for(i = 1; i <= rowSize;i++){
        for(j = 1; j <= i; j++){
            if(j % 2 == 1){
                cout << "1" << " ";
            }else{
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}