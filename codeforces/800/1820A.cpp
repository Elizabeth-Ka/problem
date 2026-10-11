#include <iostream>

using namespace std;

int main() {
    int n,l,kol;
    string s;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> s;
        kol=0;
        l = s.length();
        if (s=="^") {
            cout << 1 << "\n";
        }
        else {
        if (s[0]!='^') {
            kol += 1;
        }
        for (int j=1;j<=l;j++) {
            if (s[j-1] == '_' && s[j]!='^') {
                kol += 1;
            }
        }
        cout << kol << "\n";
        }
    }

    return 0;
}
