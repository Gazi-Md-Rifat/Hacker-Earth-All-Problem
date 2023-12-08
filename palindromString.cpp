#include <iostream>
using namespace std;


// question Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

bool isPlaindrom(string s){

    for (int i = 0; i < s.length(); i++){
        if (s[i] != s[s.length() - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){

    string n;
    cin >> n;

    if (isPlaindrom(n)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
	
	return 0;
}