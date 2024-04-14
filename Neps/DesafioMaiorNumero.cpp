#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, count = 0, greater = 0;
	
	while(cin >> n){
	    if(n != 0){
	        if(n > greater) greater = n;
	    }
	    else break;
	}
	
	cout << greater << endl;
	
	return 0;
}