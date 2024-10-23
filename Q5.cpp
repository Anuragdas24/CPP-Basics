#include <bits/stdc++.h>
using namespace std;

void fizzbuzz(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "fizzbuzz" << endl;
        }
        else if (i % 3 == 0 && i % 5 != 0)
        {
            cout << "fizz" << endl;
        }
        else if (i % 3 != 0 && i % 5 == 0)
        {
            cout << "fizz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}
int main(){
    int n=15;
    fizzbuzz(n);
    
}