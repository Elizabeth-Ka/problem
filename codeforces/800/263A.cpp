#include <iostream>

using namespace std;

int main() {
    int a[6][6];
    int i1,j1,sum;
    sum = 0;
    for (int i=1;i<=5;i++) {
        for (int j=1;j<=5;j++) {
            cin >> a[i][j];
            if (a[i][j]==1) {
                i1 = i;
                j1 = j;
            }
        }
    }
    sum += abs(3-i1);
    sum += abs(3-j1);
    cout << sum;

    return 0;
}
