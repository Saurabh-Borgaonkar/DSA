#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        for (int k = 1; k <= i-1; k++)
        {
            cout << " ";
        }

          for (int j = 1; j <=i-1; j++)
        {
            cout << " ";
        }
        for (int j = n; j >=i; j--)
        {
            cout <<"*";
        }
        cout << endl;
    }
        for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        for (int j = n; j >=i; j--)
        {
            cout <<" ";
        }
         for (int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout <<"*";
        }
        cout << endl;
    }

    // cout<<endl;

    //   for(i=1;i<=n;i++)
    // {
    // for( j=1;j<=i;j++){
    //     cout<<"*"<<" ";
    // }
    // cout<<endl;
    // }
    // for (i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout <<"*";
    //     }
    //     cout << endl;
    // }
    return 0;
}