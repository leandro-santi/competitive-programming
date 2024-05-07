#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int p, d1, d2;
    cin >> p >> d1 >> d2;
    
    if(p == 0){
        ((d1 + d2) % 2) == 0 ? cout << 0 << endl : cout << 1 << endl;
    }
    else ((d1 + d2) % 2) == 0 ? cout << 1 << endl : cout << 0 << endl;
    
	return 0;
}