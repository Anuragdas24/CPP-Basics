#include<iostream>
using namespace std;

void convertBinary(int num)
{
    // Special case when the number is 0
    if (num == 0) {
        cout << "0";
        return;
    }
    
    // creating an array to store binary equivalent
    int binaryArray[32];
 
    // using i to store binary bit at given array position
    int i = 0;
    while (num > 0) {
 
        // resultant remainder is stored at given array position
        binaryArray[i] = num % 2;
        num = num / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryArray[j];
}
 
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;  // Input from user
    convertBinary(n);  // Call function to convert and print binary
    cout << endl;
    return 0;
}