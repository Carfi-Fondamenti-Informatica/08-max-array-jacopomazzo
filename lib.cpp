#include "lib.h"

float massimo(float mat[],int n){
    float a = mat[0];
    for(int i=1;i<n;i++){
        if(mat[i] > a){
            a = mat[i];
        }
    }
    return a;
}
