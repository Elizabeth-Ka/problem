#include <iostream>

using namespace std;

int main() {
    string s;
    int n,sum;
    sum = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> s;
        if (s[1]=='-') {
            sum--;
        }
        else {
            sum++;
        }
    }
    cout << sum;

    return 0;
}
