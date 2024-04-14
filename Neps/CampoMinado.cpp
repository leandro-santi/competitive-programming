#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, num, count; cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        count = 0;
        
        if(i == 0) {
            if(arr[i] == 1) count++;
            if(arr[i+1] == 1) count++;
        }
        else if(i == n-1) {
            if(arr[i-1] == 1) count++;
            if(arr[i] == 1) count++;
        }
        else{
            if(arr[i-1] == 1) count++;
            if(arr[i] == 1) count++;
            if(arr[i+1] == 1) count++;
        }
        
        cout << count << " " << endl;
    }
	
	return 0;
}