// Eg: number = 12345
// Sum of digit of number = 1 + 2 + 3 + 4 + 5
// Sum = 15

#include<iostream>
using namespace std;

int main()
{
    int number;
    int sum=0;
    cout<<"Enter a number:";
    cin>>number;

    while(number!=0){
        sum += number%10;
        number = number/10;
    }
    cout <<"\nSum of digits: " << sum;

    return 0;
}