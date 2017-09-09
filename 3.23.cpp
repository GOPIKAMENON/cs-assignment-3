#include <iostream>
using namespace std;

int main() {
	// your code goes here

	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	
	int i = number;
	
	while (i >= 1) {
		cout << i << " ";
		i=i-1;
	}
	
	return 0;
}
