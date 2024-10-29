#include<bits/stdc++.h>
using namespace std;
int main()
{

    // learning how the conditionals works in C++
    int age;
    cin >> age;

    if(age > 18){
        cout<<"You are an Adult \n";
    }
    else if(age == 18){
        cout<<"Just an Adult\n";
    }
    else{
        cout<<"You are not an adult\n";
    }
    return 0;
}