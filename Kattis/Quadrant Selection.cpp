#include<bits/stdc++.h>

using namespace std;

int main(){
    int n1, n2, r = 0;
    cin >> n1 >> n2;

    if(n1 > 0 && n2 > 0) r = 1;
    else if(n1 < 0 && n2 > 0) r = 2;
    else if(n1 < 0 && n2 < 0) r = 3;
    else if(n1 > 0 && n2 < 0) r = 4;

    cout << r << endl;

    return 0;
}