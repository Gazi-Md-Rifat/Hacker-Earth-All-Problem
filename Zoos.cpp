#include <iostream>
using namespace std;

// Question Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/

bool answer(string word){

    int n = word.length();

    int x = 0;
    for(int i = 0; i < n; i++){
        if (word[i] == 'z'){
            x++;
        }
        else {
            break;
        }
    }

    if (2 * x == n - x){
        return true;
    }
    return false;
}


int main(){
    string word;
    cin >> word;

    if (answer(word)){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}