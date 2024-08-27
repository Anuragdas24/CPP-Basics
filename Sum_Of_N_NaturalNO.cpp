// Example
// Input : num = 8
// Output : 36

// Where first 8 number is 1, 2, 3, 4, 5, 6, 7, 8
// Sum of numbers = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout <<"Enter a number:";
    cin >> n;

    int sum=0;

    for(int i=1;i<=n;i++)
    sum+=i;

    cout << sum;

    return 0;

}