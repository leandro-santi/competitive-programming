#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t, i;
    cin >> n >> t;
    string v;
    cin >> v;
    
    while(t--){
		
		for(i = 1; i < n; i++){
			if(v[i] == 'G' && v[i-1] == 'B'){
				v[i] = 'B';
				v[i-1] = 'G';
				i++;
				}
		
			}
	}
	
	cout << v << endl;

    return 0;
}