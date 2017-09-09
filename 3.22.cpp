#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i = 1;
	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	
	while (i <= number) {
		cout << i << " ";
		i=i+1;
	}
	
	return 0;
}
