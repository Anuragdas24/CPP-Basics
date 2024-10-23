#include<bits/stdc++.h>
using namespace std;

// Function to find the number of triplets
int findTheTriplets(int price[], int n, int d) {
    int ans = 0;

    // Iterate over all possible triplets
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = price[i] + price[j] + price[k];

                // Check if the sum is divisible by d
                if (sum % d == 0) {
                    ans++;  // Increment the count
                }
            }
        }
    }
    return ans;  // Return the count of valid triplets
}

int main() {
    int n;  // Number of elements
    cin >> n;

    int d;  // The divisor
    cin >> d;

    int price[n];  // Array to store prices

    // Input the prices
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // Find the number of valid triplets and print the result
    int result = findTheTriplets(price, n, d);
    cout << result << endl;

    return 0;
}
