#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int l;
    vector<int> a;
    l = s.length();
    for(int i=0;i<l;i += 2) {
        a.push_back(s[i]-'0');
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << "+";
        }
        cout << a[i];
    }


    return 0;
}
