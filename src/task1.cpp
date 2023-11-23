/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 21.11.2023
 */

#include <iostream>

using namespace std;

int intPrinter (int a, int b) {
    cout << a << ' ';
    return a > b ? (intPrinter(--a, b)) : (a < b ? (intPrinter(++a, b)) : 0);
    // TIME COMPLEXITY: O(b-a)
}

int main() {
    int a, b;
    cin >> a >> b;
    intPrinter(a, b);
    return 0;
}
