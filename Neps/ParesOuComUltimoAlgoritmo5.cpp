#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int num, count = 0;
    
    for(int i = 0; i < 3; i++){
        cin >> num;
        if(num % 2 == 0 || num % 5 == 0) count++;
    }
    
    cout << count << endl;
    
	return 0;
}