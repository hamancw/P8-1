#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str) {
    int count = 0;
    for (char c : str) {
        count++;
    }
    return count;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    int numOfChars = countCharacter(inputString);
    cout << "Character count: " << numOfChars << endl;
}