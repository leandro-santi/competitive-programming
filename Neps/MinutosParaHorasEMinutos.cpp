#include <bits/stdc++.h>

using namespace std;

int main(){
    int m; cin >> m;
    
    int h = (m / 60);
    
    m -= (h * 60);
    
    cout << h << endl << m << endl;
	
	return 0;
}