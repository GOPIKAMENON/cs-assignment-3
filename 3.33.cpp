#include <iostream>
using namespace std;

int main() {

    int i,a=0,b,c;
cout<<"Enter any num : ";
cin>>i;
c=i%10;
while(i>0)
{
b=i;	
i=i/10;

}
cout<<b+c<<endl;


	return 0;
}
