#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // for sort
using namespace std;

// Function to determine the type of triangle
string triangleType(int a, int b, int c) {
    // Sort the sides so a <= b <= c
    vector<int> sides = {a, b, c};
    sort(sides.begin(), sides.end());
    
    // Check if it's a valid triangle
    if (sides[0] + sides[1] <= sides[2]) {
        return "None of these";  // Not a valid triangle
    }

    // Check for Equilateral
    if (a == b && b == c) {
        return "Equilateral";
    }

    // Check for IsoscelesA
    if (a == b || b == c || a == c) {
        return "Isosceles";
    }

    // If none of the conditions match
    return "None of these";
}

int main() {
    vector<vector<int>> triangleToy = {{2, 2, 1}, {3, 3, 3}, {3, 4, 5}, {1, 1, 3}};
    
    // Iterate through each set of triangle sides and determine its type
    for (auto sides : triangleToy) {
        int a = sides[0], b = sides[1], c = sides[2];
        string result = triangleType(a, b, c);
        cout << result << endl;
    }

    return 0;
}
