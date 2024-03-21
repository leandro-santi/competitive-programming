#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux; cin >> n;
    bool a = false, b = false;
    while(n--){
        cin >> aux;
        if(aux == 1){
            a = !a;
        }
        if(aux == 2){
            a = !a;
            b = !b;
        }
            
    }
    cout << a << endl << b << endl;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, op; cin >> n;
    
//     bool L1, L2;
    
//     L1 = L2 = false;
    
//     while(n--){
//         cin >> op;
        
//         if(op%2 != 0){
//             L1 = !L1;
//         }
//         else{
//             L1 = !L1;
//             L2 = !L2;
//         }
//     }
    
//     cout << L1 << endl << L2 << endl;

//     return 0;
// }