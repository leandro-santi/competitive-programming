#include <bits/stdc++.h>

using namespace std;

int main(){ 
	string s;
	char c;
	int count = 0;
	
	cin >> s >> c;
	
	for(auto i : s){
	    if(i == c) count++;
	}
	
	cout << count << endl;
	
	return 0;
}