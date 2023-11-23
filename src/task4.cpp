/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 21.11.2023
 */

#include <iostream>

using namespace std;

bool primeChecker (int number, int divider = 2) {
    return (number % divider) && ((divider * divider < number) ? primeChecker(number, ++divider) : 1);
    // TIME COMPLEXITY: O(sqrt(number))
}

int main() {
    int a;
    cin >> a;
    primeChecker(a) ? cout << "YES" : cout << "NO";
    return 0;
}
