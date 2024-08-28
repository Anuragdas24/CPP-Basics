// For Example 100

// Factors are: 1, 2, 4, 5, 10, 20, 25, 50, 100

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    num = 100;
    cout << "Fctors of" << num << " are" << endl;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}