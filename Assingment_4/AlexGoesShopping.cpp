#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;          // number of items in shop

    vector<int> price(n);

    for(int i = 0; i < n; i++)
    {
        cin >> price[i];   // storing item prices
    }

    int q;
    cin >> q;          // number of queries

    while(q--)
    {
        int A, k;
        cin >> A >> k;   // A = money Alex has, k = minimum items required

        int count = 0;   // count items whose price divides A

        for(int i = 0; i < n; i++)
        {
            if(A % price[i] == 0)   // check if Alex can spend exactly A
            {
                count++;
            }
        }

        if(count >= k)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}