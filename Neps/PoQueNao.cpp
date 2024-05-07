#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n, num, levels = 0, sum = 0; cin >> n;
    vector<int> v;
    
    for(int i = 0; i < 3; i++){
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    for(auto x : v){
        sum += x;
        if(sum > n) break;
        else levels++;
    }
    
    cout << levels << endl;
    
	return 0;
}