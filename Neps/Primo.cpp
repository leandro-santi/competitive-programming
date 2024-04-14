#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x){
    if (x <= 1)
        return false;
 
    for(int i = 2; i <= x / 2; i++)
        if (x % i == 0) return false;
 
    return true;
}

int main(){
	int x; cin >> x;

	if(is_prime(x)){
		cout << "S" << "\n";
	}
	else{
		cout << "N" << "\n";
	}
	
	return 0;
}