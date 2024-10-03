#include<bits/stdc++.h>
using namespace std;
vector<int> findFrequency(string S) {
    // Initialize a vector of size 26 with all elements as 0 (for 'a' to 'z')
    vector<int> frequency(26, 0);

    // Iterate over each character in the string
    for (char c : S) {
        if (isalpha(c)) {  // Check if the character is an alphabet
            c = tolower(c);  // Convert to lowercase to handle case insensitivity
            frequency[c - 'a']++;  // Increment the count for the corresponding character
        }
    }

    return frequency;  // Return the frequency vector
}

int main() {
    string S = "anurag";  // Example input
    vector<int> freq = findFrequency(S);
    
    // Output the frequency of each character from 'a' to 'z'
    for (int i = 0; i < 26; i++) {
        cout << freq[i] << " ";
    }
    cout << endl;
    
    return 0;
}