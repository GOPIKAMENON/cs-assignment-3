#include <iostream>
using namespace std;

int main() 
{
	float a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>b>c){cout<<a<<"is the largest number";}
	else if(b>c>a){cout<<b<<"is the largest number";}
	else{cout<<c<<"is the largest number";}
	return 0;
}
