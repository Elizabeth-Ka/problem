#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n,kup;
    cin >> n;
    kup=0;
    vector<int> bs = {100, 20, 10, 5, 1};
    for (int b : bs) {
        kup += n / b; 
        n %= b;       
    }
    
    cout<< kup;

    return 0;
}
