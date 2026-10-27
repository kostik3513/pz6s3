#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> numbers;

    numbers.push(15);
    numbers.push(-4);
    numbers.push(42);
    numbers.push(8);
    numbers.push(0);
    numbers.push(99);
    numbers.push(-15);
    numbers.push(23);
    numbers.push(67);
    numbers.push(4);
    numbers.push(12);
    numbers.push(88);

    int first = numbers.front();
    int minVal = first;
    int maxVal = first;

    queue<int> tempQueue;

    while (!numbers.empty()) {
        int x = numbers.front();
        numbers.pop();

        if (x < minVal) {
            minVal = x;
        }
        if (x > maxVal) {
            maxVal = x;
        }

        tempQueue.push(x);
    }

    numbers = tempQueue;

    cout << "Найменший елемент: " << minVal << endl;
    cout << "Найбільший елемент: " << maxVal << endl;

    return 0;
}
