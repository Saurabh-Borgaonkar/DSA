#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main() {
	int n;
	int t;
	cin>>t;
	vector<string>result;
	while(t--){
	cin>>n;
	vector<string> arr(n);
	for(int i=0;i<arr.size();i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]<arr[j]+arr[i]){
				swap(arr[i],arr[j]);
			}
		}
	}
	string ans="";
	for(int i=0;i<n;i++){
		ans=ans+arr[i];
	}
	result.push_back(ans);
	}
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<endl;
	}
	return 0;
}