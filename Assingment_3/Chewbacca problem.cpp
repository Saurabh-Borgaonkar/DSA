#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.length(); i++) {
        int digit = x[i] - '0';

        // First digit special case (cannot become 0)
        if (i == 0 && digit == 9) {
            continue;
        }

        int inverted = 9 - digit;

        // Take minimum of digit and inverted value
        if (inverted < digit) {
            x[i] = inverted + '0';
        }
    }

    cout << x << endl;

    return 0;
}