#include <iostream>
using namespace std;


// question Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/

#include <iostream>
using namespace std;

int factorial(int n){
	if (n == 1){
		return 1;
	}
	return  n * factorial(n - 1);
}

int main(){
	int n;
	cin >> n;

	cout << factorial(n);
	
	return 0;
}