#include<bits/stdc++.h>
using namespace std;

int minFlips(string pwd)
{
    int countFlips = 0;
    for(int i = 0;i<pwd.size()-1;i+=2)
    {
        if(pwd[i]!=pwd[i+1])
        {
            countFlips++;
        }
    }
    return countFlips;
}

int main()
{
    string pwd;
    cout << "Enter password string: ";
    cin >> pwd;

    int result = minFlips(pwd);
    cout<<"Minimum number of flips needed:" << result <<endl;

    return 0;

}
