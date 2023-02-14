#include <iostream>
#include <math.h>
 
#define N 3.14159

using namespace std;
 
int main() {
    double r; cin >> r;

    printf("A=%.4f\n", N * pow(r, 2));
 
    return 0;
}