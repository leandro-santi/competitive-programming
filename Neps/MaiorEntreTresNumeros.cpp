#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int n = 3, max = INT_MIN, num;
	
	while(n--){
	    cin >> num;
	    if(num > max) max = num;
	}
	
	cout << max << endl;
	
	return 0;
}