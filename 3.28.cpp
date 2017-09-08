#include <iostream>
using namespace std;

int main() {
	int n, i, sum = 0;
    
    cout<<"Enter a positive integer: ";
    cin>>n;

    for(i=2; i <= n; i+=2)
    {
        sum += i;   
    }

   cout<<"Sum = "<<sum;

	
	return 0;
}
