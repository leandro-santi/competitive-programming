#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int n, d, a, result;
	cin >> n >> d >> a;
	
	a <= d ? result = d - a : result = n - a + d;
	
	cout << result << endl;
    
	return 0;
}