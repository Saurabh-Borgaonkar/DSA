#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n = matrix.size();

    for(int j = 0; j < n; j++) {
        for(int i = n - 1; i >= 0; i--) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}