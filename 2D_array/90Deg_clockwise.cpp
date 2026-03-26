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
      vector<vector<int>>ans(n,vector<int>(n));
      int k;
    for(int j = 0; j < n; j++) {
        k=0;
        for(int i = n - 1; i >= 0; i--) {
           ans[j][k]= matrix[i][j];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}