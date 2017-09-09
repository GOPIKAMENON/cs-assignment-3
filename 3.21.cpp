#include <iostream>
using namespace std;

int main() 
{
	int a;
	cin>>a;
	
	if (a<=50){cout<<(a*.50)*1.2;}
	else if (a<=150 &&a>50) {cout<<(50*.50+(a-50)*.75)*1.2;}
	else if (a>150 &&a<=250) {cout<<(50*.50+100*.75+(a-150)*1.20)*1.2;}
	else {cout<<(50*.50+100*.75+100*1.20+(a-250)*1.50)*1.2;}
	return 0;
}
