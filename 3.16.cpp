#include <iostream>
using namespace std;

int main() 
{
	int x,y,z;
  cin>>(x,y,z);
  if((x==y) && (y==z))
  {
  cout<<("The triangle is isosceles");
  } 
  else if((x==z) || (y==z) || (x==y))
  {
  cout<<("The triangle is equilateral");
  }
  else
  {
  cout<<("The triangle is scalene");
  }
	// your code goes here
	return 0;
}
