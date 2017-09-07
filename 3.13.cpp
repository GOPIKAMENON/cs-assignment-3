#include <iostream>
using namespace std;

int main() {
	int amt,r2000,r500,r200,r100,r50,r20,r10;
	cin>>amt;
	r2000=amt/2000;
	amt=amt%2000;
	r500=amt/500;
	amt=amt%500;
	r200=amt/200;
	amt=amt%200;
	r100=amt/100;
	amt=amt%100;
	r50=amt/50;
	amt=amt%50;
	r20=amt/20;
	amt=amt%20;
	r10=amt/10;
	amt=amt%10;
	cout<<"rs 2000/-"<<r2000<<endl;
	cout<<"rs 500/-"<<r500<<endl;
	cout<<"rs 200/-"<<r200<<endl;
	cout<<"rs 100/-"<<r100<<endl;
	cout<<"rs 50/-"<<r50<<endl;
	cout<<"rs 20/-"<<r20<<endl;
	cout<<"rs 10/-"<<r10<<endl;
	cout<<"as coins"<<amt<<endl;
	return 0;
}
