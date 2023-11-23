/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 21.11.2023
 */

#include <iostream>

using namespace std;

bool yesPrinter (int a) {
    return (a % 2) ? ((a == 1)) : yesPrinter(a / 2);
    // TIME COMPLEXITY: O(log(a))
}

int main() {
    int a;
    cin >> a;
    (yesPrinter(a)) ? cout << "YES" : cout << "NO";
    return 0;
}
