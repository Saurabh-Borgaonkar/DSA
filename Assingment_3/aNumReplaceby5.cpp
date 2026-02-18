#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if(n == 0) {
        cout << 5;
        return 0;
    }

    long long pos = 1;
    long long res = 0;

    bool neg = false;
    if(n < 0) {
        neg = true;
        n = -n;
    }

    while(n != 0){
        int ld = n % 10;

        if(ld == 0)
            ld = 5;

        res = res + ld * pos;
        pos = pos * 10;
        n = n / 10;
    }

    if(neg)
        res = -res;

    cout << res;
    return 0;
}