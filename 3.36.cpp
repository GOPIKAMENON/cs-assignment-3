#include <iostream>
using namespace std;

int main() {
	 int n,p=1;

cin>>n;
while(n!=0)
{
p=p*(n%10);
n=n/10;
}
cout<<"product of digits="<<p;
    
	return 0;
}

