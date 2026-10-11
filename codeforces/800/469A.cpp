#include <iostream>
 
using namespace std;
 
int main() {
    int n,x,y,p,res;
    cin >> n;
    int a[n+1] = {0};
    cin >> p;
    res = 1;
    for (int i=1;i<=p;i++) {
        cin >> x;
        a[x] = 1;
    }
    cin >> p;
    for (int i=1;i<=p;i++) {
        cin >> x;
        a[x] = 1;
    }
    for (int i=1;i<=n;i++) {
        if (a[i]==0) {
            res = 0;
        }
    }
    if (res==0) {
        cout << "Oh, my keyboard!";
    }
    else {
        cout << "I become the guy.";
    }
 
    return 0;
}
