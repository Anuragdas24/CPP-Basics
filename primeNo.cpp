// Example
// Input : 5
// Output : 5 is a Prime

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int n = 17;

    for (int i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
            count += 1;
    }

    if (n == 0 || n == 1)
        cout << "The given number " << n << "is not prime";

    else if (count > 2)
    {
        
        cout << "The given number " << n << " is not prime";
        
    }
    else
    {
        cout<<"The given number " << n <<" is prime";
    }
    return 0;
}