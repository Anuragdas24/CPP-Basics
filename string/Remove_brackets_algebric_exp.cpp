#include <iostream>
using namespace std;

int main()
{

    char str[100] = "Prepins))ta", str_without_brackets[100];
    int i = 0, j = 0;

    while (str[i] != '\0')
    {
        if (str[i] != '(' && str[i] != ')')
        {
            str_without_brackets[j++] = str[i];
        }
        i++;
    }
    str_without_brackets[j] = '\0';

    cout << "The string after removing all the brackets is:\n"
         << str_without_brackets;
    return 0;
}