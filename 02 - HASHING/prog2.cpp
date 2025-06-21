//write a c++ program to find the occurrences of Q characters in a character array using hashing
#include <iostream>
#include <string>
using namespace std;

void readString(string &s) {
    cout << "Enter a string (lowercase letters only): ";
    cin >> s;
}

void precomputeHash(const string &s, int hash[], int hashSize) {
    for (char ch : s) {
        hash[ch - 'a']++;
    }
}

void processQueries(const int hash[], int hashSize) {
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    cout << "Enter the characters to query (lowercase letters):" << endl;
    while (q--) {
        char c;
        cin >> c;
        cout << "Count of '" << c << "': " << hash[c - 'a'] << endl;
    }
}

int main() {
    string s;
    readString(s);

    int hash[26] = {0}; // For lowercase 'a' to 'z'
    precomputeHash(s, hash, 26);

    processQueries(hash, 26);

    cout << "Thank you for using the character occurrence finder!" << endl;
    return 0;
}