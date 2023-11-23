/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 21.11.2023
 */

#include <iostream>

using namespace std;

int sumPrinter (int a) {
    return a ? a % 10 + sumPrinter(a / 10) : 0;
    // TIME COMPLEXITY: O(log(a))
}

int main() {
    int a;
    cin >> a;
    cout << sumPrinter(a);
    return 0;
}
