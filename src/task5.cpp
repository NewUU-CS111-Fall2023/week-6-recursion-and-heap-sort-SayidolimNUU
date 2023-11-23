/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 21.11.2023
 */

#include <iostream>

using namespace std;

bool palindromChecker (string str, int i = 0) {
    return (str[i] == str[str.length() - 1 - i]) && ((i * 2 > str.length()) ? 1 : palindromChecker(str, ++i));
    // TIME COMPLEXITY: O(str.length())
}

int main() {
    string a;
    cin >> a;
    palindromChecker(a) ? cout << "YES" : cout << "NO";
    return 0;
}
