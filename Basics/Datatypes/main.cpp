#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10; // this is a 4 Byte datatype only stores from range -2^31 to 2^31-1
    long b = 1000000; // this is a 8 Byte datatype only stores from range -2^63 to 2^63-1

    float c = 10.5; // this is a 4 Byte datatype only stores from range -3.4*10^38 to 3.4*10^38
    double d = 10.5; // this is a 8 Byte datatype only stores from range -1.7*10^308 to 1.7*10^308

    char e = 'A'; // this is a 1 Byte datatype only stores from range -128 to 127

    string f; // this is a 1 Byte datatype only stores from range -128 to 127

    // cin >> f; // only took string till space
    getline(cin, f); // took string till enter
    cout<<f<<endl;
    return 0;
}