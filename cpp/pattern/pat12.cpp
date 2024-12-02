#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<i+1; j++){
            cout<<j+1;
        }
        for(int k = 0; k < n - i - 1; k++){
            cout<<"  ";
        }
        for(int l = 0; l < i + 1; l++){
            cout<<i+l+1;
        }
        cout<<endl;
    }
    return 0;
}