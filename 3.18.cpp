#include <iostream>
using namespace std;

int main() 
{
	int cp,sp, amt; 
    
    cin>>cp>>sp;
    if(sp > cp)
    {
    
        cout<<("the profit is")<<sp-cp;
    }
    else if(cp > sp)
    {
      
        cout<<("the loss is")<<cp-sp;
    }
    else
    {
        
        cout<<("No Profit No Loss.");
    }
	
	return 0;
}
