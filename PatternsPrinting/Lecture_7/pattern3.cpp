 #include <iostream>
using namespace std;
int main()
{
    int m, i;
    cin >> m;
    int n=(m+1)/2;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i+1; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k<=2*i-1; k++)
        {
            cout<<"* ";
       
        }
        cout << endl;
    }
     for (i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <=n-i+1; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k<=2*i-1; k++)
        {
            cout<<"* ";
       
        }
        cout << endl;
    }
    return 0;
}