#include <iostream>
using namespace std;
int main()
{
    int n, i, j, c, r;
  
    cin >> n;
    for (i = 0; i < 10; i++) 
    {
        cout << "The frequency of " << i << " = ";
        c = 0;
        for (j = n; j > 0; j = j / 10) 
        {
            r = j % 10;
            if (r == i) 
            {
                c++;
            }
        }
        cout << c<< endl;
    }
}
