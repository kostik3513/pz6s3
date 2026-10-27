#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Passenger {
    string ticketNumber;
};

int main() {
    queue<Passenger> q;

    q.push({"TK-101"});
    q.push({"TK-102"});
    q.push({"TK-103"});
    q.push({"TK-104"});
    q.push({"TK-105"});
    q.push({"TK-106"});

    int boarded = 0;
    while (!q.empty() && boarded < 3) {
        cout << "Посадка пасажира з квитком: " << q.front().ticketNumber << endl;
        q.pop();
        boarded++;
    }

    cout << "\nПасажири, які чекають у черзі:" << endl;
    while (!q.empty()) {
        cout << "Квиток: " << q.front().ticketNumber << endl;
        q.pop();
    }

    cout << "\nРоботу завершено." << endl;

    return 0;
}
