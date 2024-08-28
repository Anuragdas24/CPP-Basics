#include<iostream>

using namespace std;
int main(){
    int num;
    int fact=1;
    cout<<"Enter a number:";
    cin>>num;

    if(num<=0)
        cout<<0;
    else{
        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        cout<<"factorial is\n"<<fact<<" ";
    }
}