#include <bits/stdc++.h>
using namespace std;

int main(){
    int grade;
    cout<<"Enter the grade: ";
    cin>>grade;

    if(grade < 25){
        cout<<"F";
    }
    else if(grade <= 44){
        cout<<"E";
    }
    else if(grade <= 49){
        cout<<"D";
    }
    else if(grade <= 59){
        cout<<"C";
    }
    else if(grade <= 79){
        cout<<"B";
    }
    else{
        cout <<"A";
    }
    cout << " grade" << endl;
    return 0;
}