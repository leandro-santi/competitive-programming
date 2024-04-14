#include <bits/stdc++.h>

using namespace std;

int main(){
    int l, c; cin >> l >> c;
    
    int type1, type2;
    
    type1 = (l * c) + ((l - 1) * (c - 1));
    type2 = ((l - 1) + (c - 1)) * 2;
    
    cout << type1 << endl << type2 << endl;
	
	return 0;
}