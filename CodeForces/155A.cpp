#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; 
    cin >> t;
    int mini, maxi;
    int arr[t];
    int count = 0;
    for(int i = 0; i < t; i++){
        cin >> arr[i];
        if(i >= 1){
            if(arr[i] < mini) {
                count++;
                mini = arr[i];
            }
            else if(arr[i] > maxi){
                count++;
                maxi = arr[i];
            }
        }
        else{
            mini = arr[i];
            maxi = arr[i];
        }
    }

    cout << count << endl;

    return 0;
}