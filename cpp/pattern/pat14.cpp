#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            char val = 'A' + j;
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}