#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    set<int> p;

    for (int i = 2; i <= n; i++){
        p.insert(i);
    }

    for (auto it = p.begin(); it != p.end(); it++){
        int prime = *it;

        for (int multiple = prime * 2; multiple <= n; multiple += prime){
            p.erase(multiple);
        }
    }

    cout << "List of prime number: ";
    for(int x : p){
        cout << x << " ";
    }
}