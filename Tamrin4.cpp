#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 1) {
        return false;
    }
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            c += 1;
        }
    }
    if (c > 2) {
        return false;
    }
    return true;
}
int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}