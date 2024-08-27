#include<iostream>
using namespace std;
int main()
{
    int first,second,third;
    first=10,second=20,third=30;

    if((first>=second) && (first>=third))
        cout << first << " is the greatest ";

    else if ((second>=first ) && (second>=third))
        cout << second << " is the greatest";

    else    
        cout << third << " is the greatest";
    return 0;

}