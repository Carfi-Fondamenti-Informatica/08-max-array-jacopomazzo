#include <iostream>
#include "lib.h"

using namespace std;

float massimo(float mat[],int n){
    float a = mat[0];
    for(int i=1;i<n;i++){
        if(mat[i] > a){
            a = mat[i];
        }
    }
    return a;
}

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
