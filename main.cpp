#include <iostream>
#include "lib.h"

using namespace std;


int main() {
    int n = 0;
    cin >> n;
    float a[n];
    for(int i=0; i<n ;i++){
        cin >> a[i];
    }
    cout << massimo(a,n);
    return 0;
}
