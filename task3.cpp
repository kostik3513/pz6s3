#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<char> letters;
    string word = "ProgRAMming";

    for (int i = 0; i < word.length(); i++) {
        letters.push(word[i]);
    }

    int upperCount = 0;

    while (!letters.empty()) {
        char ch = letters.front();
        letters.pop();

        if (ch >= 'A' && ch <= 'Z') {
            upperCount++;
        }
    }

    cout << "Кількість великих літер у черзі: " << upperCount << endl;

    return 0;
}
