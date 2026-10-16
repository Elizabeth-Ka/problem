#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n,kup;
    cin >> n;
    kup=0;
    if(n/100 > 0) {
        kup += n/100;
        n = n%100;
    }
    if(n/20 > 0) {
        kup += n/20;
        n = n%20;
    }
    if(n/10 > 0) {
        kup += n/10;
        n = n%10;
    }
    if(n/5 > 0) {
        kup += n/5;
        n = n%5;
    }
    if(n/1 > 0) {
        kup += n/1;
        n = n%1;
    }
    cout<< kup;

    return 0;
}
