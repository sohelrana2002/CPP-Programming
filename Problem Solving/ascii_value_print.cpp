#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 255; i++){
        cout << i << ": " << static_cast<unsigned char>(i) << endl;
    }
}

// static_cast<unsigned char>(i) - convert it's number to it's ascii charachter
// unsigned char - is important to handle undefine behavior for value above 127