#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int a, b, c, d; cin >> a >> b >> c >> d;
	
	((a == b + c + d) && (d == b + c) && (b == c)) ? cout << 'S' << endl : cout << 'N' << endl;
	
	return 0;
}