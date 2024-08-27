// Example
// Input : 2020
// Output : 2020 is a Leap Year

// 1. If a year is divisible by 400, it's a leap year.
// 2. If a year is divisible by 4 but not by 100 then its leap year

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cout << "enter year";
    cin >> year;

    if (year % 400 == 0)
        cout << year << " is a Leap Year";
    else if (year % 4 == 0 && year % 100 != 0)
        cout << year << " is a Leap Year";
    else
        cout << year << " is not a Leap Year";

    return 0;
}