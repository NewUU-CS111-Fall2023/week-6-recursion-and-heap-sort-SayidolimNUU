/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 21.11.2023
 */

#include <iostream>

using namespace std;

int secondBest(int largest = 1, int second = 1) {
    int input;
    cin >> input;
    if (!input) {
        cout << second;
    }
    return (input) ? ((input > second) ? ((input > largest) ? secondBest(input, largest) : secondBest(largest, input)) : secondBest(largest, second)): 0;
    // TIME COMPLEXITY: O(n), where n is the number of inputs
}

int main() {
    secondBest();
    return 0;
}
