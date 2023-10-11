#include <iostream>
#include <string>
using namespace std;

int sumation(int a) {
    string b = to_string(a);
    int c = 0;
    for (char i : b) {
        c += i - '0';
    }
    return c;
}

int main() {
    try {
        int a, b, c;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Enter third number: ";
        cin >> c;
        if (a > b) {
            swap(a, b);
        }
        for (int i = a; i <= b; i++) {
            if (sumation(i) == c) {
                cout << i << " ";
            }
        }
    } catch (...) {
        cout << "invalid input(s)" << endl;
    }
    return 0;
}