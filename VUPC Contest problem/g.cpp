#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int q;
    cin >> q;

    while (q--) {
        char op;
        cin >> op;

        if (op == 'S') {
            int d;
            cin >> d;

            for (int i = 0; i < n; i++) {
                a[i] += d;
            }
        } else if (op == 'M') {
            int d;
            cin >> d;

            for (int i = 0; i < n; i++) {
                a[i] *= d;
            }
        } else if (op == 'D') {
            int k;
            cin >> k;

            for (int i = 0; i < n; i++) {
                a[i] /= k;
            }
        } else if (op == 'P') {
            int y, z;
            cin >> y >> z;

            swap(a[y], a[z]);
        } else if (op == 'R') {
            reverse(a.begin(), a.end());
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}