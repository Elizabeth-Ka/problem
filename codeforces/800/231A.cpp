#include <iostream>

using namespace std;

int main() {
    int n,p,v,t,res;
    cin >> n;
    res = 0;
    for (int i = 1; i<=n; i++) {
        cin >> p >> v >> t;
        if(p+t+v >= 2) {
            res += 1;
        }
    }
    cout << res;

    return 0;
}
