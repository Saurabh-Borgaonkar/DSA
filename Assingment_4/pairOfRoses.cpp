// Deepak has a limited amount of money that he can spend on his girlfriend. So he decides to buy two roses for her. Since roses are of varying sizes, their prices are different. Deepak wishes to completely spend that fixed amount of money on buying roses for her.
// As he wishes to spend all the money, he should choose a pair of roses whose prices when summed up are equal to the money that he has.
// Help Deepak choose such a pair of roses for his girlfriend.

// NOTE: If there are multiple solutions print the solution that minimizes the difference between the prices i and j. After each test case, you must print a blank line.


// Input Format
// The first line indicates the number of test cases T.
// Then, in the next line, the number of available roses, N is given.
// The next line will have N integers, representing the price of each rose, a rose that costs less than 1000001.
// Then there is another line with an integer M, representing how much money Deepak has.
// There is a blank line after each test case.


#include<iostream>
#include<algorithm>
using namespace std;
int main() {

	 int t;
    cin >> t;
    while(t--) {

        int n;
        cin >> n;

        int arr[10000];

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
		int m;
		cin>>m;
		sort(arr, arr+n);

		int l=0;
		int r=n-1;
		int a,b;
		while(l<r){
			int sum=arr[l]+arr[r];
			if(sum==m){
				 a=arr[l];
				 b=arr[r];
				l++;
				r--;
			}else if(sum < m){
                l++;
            }
            else{
                r--;
            }
		}
		cout<<"Deepak should buy roses whose prices are "<<a<<" and "<<b<<"."<<endl;
        cout<<endl;
	}
	return 0;
}