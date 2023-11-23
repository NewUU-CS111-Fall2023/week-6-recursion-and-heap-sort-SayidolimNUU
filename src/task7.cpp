/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 21.11.2023
 */

#include <iostream>

using namespace std;

int integerReverser(int initial, int final = 0) {
    return initial ? integerReverser(initial / 10, final * 10 + initial % 10) : final;
    // TIME COMPLEXITY: O(log(initial))
}

int main() {
    int n;
    cin >> n;
    cout << integerReverser(n);
    return 0;
}
