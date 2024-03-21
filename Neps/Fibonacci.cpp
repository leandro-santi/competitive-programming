#include<bits/stdc++.h>

using namespace std;

int fib(int n){
    if(n == 0 || n == 1) return 1;
    return (fib(n-1) + fib(n-2));
}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, fib, count = 1, a, b, sum;
//     cin >> n;
    
//     a = 0;
//     b = 1;
    
//     while(n--){
//         if(count == 1) fib = a; 
//         else if(count == 2) fib = b;
//         else{
//             sum = a + b;
//             a = b;
//             fib = b = sum;
//         }
        
//         count++;
//     }
    
//     cout << fib << endl;
    
//     return 0;
// }