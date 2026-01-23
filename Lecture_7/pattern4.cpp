 #include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k<=2*i-1; k++)
        {
            cout<<k<<" ";
        }
        for(int j=2*i-2;j>=i;j--){
            cout<<j<<" ";
        }
        cout << endl;
    }
    return 0;
}