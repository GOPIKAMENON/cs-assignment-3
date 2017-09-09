#include <iostream>
using namespace std;

int main() 
{
	int a,b,c,d,e,Percentage;
	cin>>a>>b>>c>>d>>e;
	Percentage=(a+b+c+d+e)/5;
	if (Percentage >= 90){cout<<"Grade A";}
	else if (Percentage >= 80) {cout<<"Grade B";}
	else if (Percentage >= 70) {cout<<"Grade C";}
	else if (Percentage >= 60) {cout<<"Grade D";}
	else if (Percentage >= 40) {cout<<"Grade E";}
	else {cout<<"Grade F";}
	return 0;
}
