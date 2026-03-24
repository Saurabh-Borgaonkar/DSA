#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int current_sum = arr[0];
    int max_sum = arr[0];

    for(int i = 1; i < arr.size(); i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    cout << "Maximum subarray sum = " << max_sum;

    return 0;
}