// Example :
// Number : 12321
// Reverse : 12321
// Both number & reverse are equal so palindrome number.

#include <iostream>
using namespace std;

int main ()
{
    //variables initialization
    int num, reverse = 0, rem, temp;
    num=12321;
    cout <<"\nThe number is: "<<num; 
   
 
    temp = num;
    //loop to find reverse number
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    };
    
    // palindrome if num and reverse are equal
    if (num == reverse)
        cout << num << " is Palindrome";
    else
        cout << num << " is not a Palindrome";

}