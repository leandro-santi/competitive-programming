#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 10, search;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cin >> search;
    
    for(int i = n-1; i >= 0; i--){
        if(arr[i] == search){ 
            cout << "SIM" << endl;
            return 0;
        }
    }
    
    cout << "NAO" << endl;
	
	return 0;
}