#include <iostream>
 
using namespace std;
 
int main() {
    int n, h;
    float value;

    cin >> n >> h >> value;

    cout << "NUMBER = " << n << endl;
    printf("SALARY = U$ %.2f\n", h * value);
 
    return 0;
}