#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b;

    cin >> a >> b;

    if(a > b) swap(a, b);

    int c = a - (b - a);

    cout << c << endl; 

    return 0;
}