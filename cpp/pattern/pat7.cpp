#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0; i<n;i++){
        // spaces
        for(int j = 0; j<n-i-1;j++){
            cout<<" ";
        }
        // star1
        for(int k = 0; k<i+1; k++){
            cout<<"*";
        }

        // star2
        for(int k = 0; k<i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}