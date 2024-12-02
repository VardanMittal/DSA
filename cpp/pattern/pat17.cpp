#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        // char 1
        for (int k = 0; k < i + 1; k++)
        {
            char val = 'A' + k;
            cout << val << " ";
        }
        // char 2
        for (int l = 0; l < i; l++)
        {
            char val = 'A' + l;
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}