#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0, i; cin >> n;
    
    int arr[n];
    
    for(i = 0; i < n; i++) cin >> arr[i];
    
    for(i = 0; i < n-2; i++){
        if(arr[i] == 1 && arr[i+1] == 0 && arr[i+2] == 0)
            count++;
    }
    
    cout << count << endl;

    return 0;
}