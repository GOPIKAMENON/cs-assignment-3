#include <iostream>
using namespace std;

int main() 
{
	int a;
	cin>>a;
	
	if (a<= 10000){cout<<a+0.2*a+0.8*a;}
	else if (a<= 20000) {cout<<a+0.25*a+.90*a;}
	else {cout<<a+0.3*a+.95*a;}
	return 0;
}
