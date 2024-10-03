#include<bits/stdc++.h>
#include<string.h>
#include <string>
using namespace std;
int main(){
    string str;

   cout << "Enter a string: ";
   getline(cin,str);


    for(int i=0;i<=str.length();i++){
        if(str[i]>= 97 && str[i]<=122){
            str[i]=str[i]-32;
        }else{
            str[i]=str[i]+32;
        }
        
    }
    cout << "Toggled case string: " << str << endl;
    return 0;
}