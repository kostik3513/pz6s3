#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Product {
    string name;
    double price;
};

int main() {
    queue<Product> products;

    products.push({"Notebook", 150.0});
    products.push({"Headphones", 450.0});
    products.push({"Mousepad", 180.5});
    products.push({"USB Cable", 99.9});
    products.push({"Keyboard", 850.0});

    cout << "Товари, ціна яких менша за 200 грн:\n";

    while (!products.empty()) {
        Product p = products.front();
        products.pop();

        if (p.price < 200.0) {
            cout << p.name << " — " << p.price << " грн\n";
        }
    }

    return 0;
}
