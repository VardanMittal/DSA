#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"your age: ";
    cin>>age;

    if(age < 18){
        cout<<"not eligible for job"<<endl;
    }
    else{
        if(age > 57){
            cout << "retirement time \n";
        }
        else if(age >= 55){
            cout<<"eligible for job but retirement soon" << endl;
        }
        else{
            cout<<"eligible for job\n";
        }
    }
    return 0;
}