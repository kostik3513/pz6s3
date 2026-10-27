#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> source;
    queue<int> result;

    for (int i = 1; i <= 80; i++) {
        source.push(i);
    }

    while (!source.empty()) {
        int x = source.front();
        source.pop();

        if (x > 25 && x % 2 != 0) {
            result.push(x);
        }
    }

    cout << "Непарні числа, більші за 25: ";
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;

    return 0;
}
