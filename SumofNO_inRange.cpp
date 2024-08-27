// Example
// Input : 2 5
// Output : 2 + 3 + 4 + 5 + 6 = 20

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
int main()
{
    int num1 = 5;
    int num2 = 10;
    int sum = 0;
    for (int i = num1; i <= num2; i++)
    {
        sum = sum + i;
        
       
    }
    cout<<sum;
    return 0;
}