#include <iostream>

using namespace std;

int main() {
    int n,diff,suma,sumg,a,g;
    cin >> n;
    suma = 0;
    sumg = 0;
    for (int i=1;i<=n;i++) {
        cin >> a >> g;
        diff = suma - sumg;
        if (abs(diff+a)<=500) {
            suma += a;
            cout << "A";
        }
        else {
            sumg += g;
            cout << "G";
        }
    }

    return 0;
}
