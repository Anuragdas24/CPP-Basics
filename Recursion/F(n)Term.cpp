#include <bits/stdc++.h>
using namespace std;

int term(int calculated, int current, int N)
{
    int i, cur = 1;

    if (current == N + 1)
        return 0;

    for (i = calculated; i < calculated + current; i++)
        cur *= i;

    return cur + term(i, current + 1, N);
}

int main()
{
    int N = 3;

    cout << term(1, 1, N);

    return 0;
}