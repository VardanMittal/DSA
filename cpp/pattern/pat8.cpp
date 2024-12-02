#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++){
        // space
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        // star 1
        for(int k = 0; k < n - i; k++){
            cout<<"*";
        }
        // star 2
        for(int l = 0; l < n-i-1; l++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}