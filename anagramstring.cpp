//Anagram string
#include <iostream>
using namespace std;

int main() {
    char A[] = "decomal";
    char B[] = "medical";
    int h[26] = {0}; // Frequency array for 26 lowercase letters
    int i;

    // Count frequency of each character in string A
    for (i = 0; A[i] != '\0'; i++) {
        h[A[i] - 'a'] += 1; // Use 'a' instead of 97 for better readability
    }

    // Decrease frequency based on characters in string B
    for (i = 0; B[i] != '\0'; i++) {
        h[B[i] - 'a'] -= 1; // Use B[i] instead of A[i]
        if (h[B[i] - 'a'] < 0) { // Check if frequency goes negative
            cout << "This string is not an Anagram" << endl;
            return 0; // Exit if not an anagram
        }
    }

    // Check if all counts are zero
    for (i = 0; i < 26; i++) {
        if (h[i] != 0) {
            cout << "This string is not an Anagram" << endl;
            return 0; // Exit if not an anagram
        }
    }

    cout << "This string is an Anagram" << endl;
    return 0;
}