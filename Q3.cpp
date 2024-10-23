
#include<bits/stdc++.h>
using namespace std;

int findMinimumMoves(string &word){

    int moves=0;  // Initialize the moves counter to 0
    unordered_map<char,int> cmp;  // An unordered map (hashmap) to count occurrences of each character

    // Loop through the string to count occurrences of each character
    for(int i = 0;i<word.size();i++){
        cmp[word[i]]++;  // Increment the count of the current character in the map
    }

    // Iterate over the map to calculate the number of moves
    for(auto it:cmp){
        moves += (it.second) / 2;  // For each character, add half of its occurrences to 'moves'
    }

    return moves;  // Return the total number of moves
}
int main(){
    string word = "baabacaa";  // Input string
    int result = findMinimumMoves(word);  // Call the function to get the minimum moves
    cout << result << endl;  // Output the result
    return 0;
}


