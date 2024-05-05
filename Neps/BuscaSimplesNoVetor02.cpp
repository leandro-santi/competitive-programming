#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int arr[10], x, count = 0, i, aux = 0;
	
	vector<int> index;
	
	for(i = 0; i < 10; i++){
	    cin >> arr[i];
	}
	
	cin >> x;
	
	for(i = 0; i < 10; i++){
	    if(arr[i] == x) {
	        index.push_back(i);
	        count++;
	    }
	}
	
	if(count == 0) cout << "Mia x" << endl;
	
	else{
	    cout << count << endl;

        for(auto i : index){
            cout << i << " ";
        }
    	
    	cout << endl;
	}
	
	return 0;
}