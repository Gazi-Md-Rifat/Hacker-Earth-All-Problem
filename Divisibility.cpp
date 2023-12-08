#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Question Link :https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/


// ------------its right but take n time ..------------
// bool isDivisible(int arr[], int n){

//     int sum = 0;

//     for (int i = 0; i < n; i++){
//         int x = arr[i] % 10;
//         sum = (sum * 10) + x;
//     }

//     cout << sum  << " ";

//     if (sum % 10 == 0){
//         return true;
//     }
//     return false;
// }



// if i make sure my number last digist is 0 thats mean i can divide this number by 10.. so i need just chech last digist form last data... number what  i make using last digit from each data.. 
bool isDivisible(int arr[], int n){ // time complexity is O(1);

    if (arr[n-1] % 10 == 0){
        return true;
    }
    return false;
}

int main(){
	int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if (isDivisible(arr, n)){
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}