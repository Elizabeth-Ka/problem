#include <iostream>

using namespace std;

int main() {
    string s;
    int n;
    cin >> n;
    for (int i = 1;i<=n; i++) {
        cin >> s;
        int l;
        l = s.length();
        if (l>10) {
            cout << s[0] << l-2 << s[l-1] << "\n";
        }
        else {
            cout << s << "\n";
        }
    }

    return 0;
}
