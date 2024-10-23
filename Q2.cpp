#include <bits/stdc++.h>
using namespace std;

vector<int> arrayChallenge(vector<int> &arr)
{
    vector<int> ans;

    int n = arr.size();
    ans.push_back(0);

    for (int i = 1; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            int ele = arr[i] - arr[j];
            sum += ele;
        }
        ans.push_back(sum);
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter number of elements:";
    cin >> n;

    vector<int> arr(n);

    cout << "enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> result = arrayChallenge(arr);

    cout << "output\n";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}