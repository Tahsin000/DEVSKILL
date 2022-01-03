#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define Mod             1000000007
#define Base            10
string str;
ll len;
ll power[100000];
ll h[100000];

/*
    __________ TIPIC _________
    1. Hashing 
*/

void pre (){
    power[0] = 1;
    for(ll i=1; i<len; i++){
        power[i] = (power[i-1] * Base) % Mod;  
    }
    h[0] = str[0] - '0';
    for(ll i=1; i<len; i++){
        h[i] = (h[i-1] * Base + (str[i] - '0')) % Mod;
    }
}
ll getHash(ll l, ll r){
    return (h[r] - (h[l-1] * power[r-l+1]) + Mod) % Mod;
}
ll generateHash(string s){
    ll HashValue = 0;
    for(ll i=0; i<s.size(); i++){
        HashValue = (HashValue * Base + (s[i] - '0')) % Mod; 
    }
    return HashValue;
}

void Hash_main(){
    cin >> str;
    len = str.size();
    pre();
    string s2 ; cin >> s2;
    ll H1 = generateHash(s2);
    for(ll i=0; i<s2.size(); i++){
        if (getHash(i, i+s2.size()-1) == H1){
            cout << "Substring found at\n" << i << endl;
        }
    }
}

int main()
{
    Hash_main();
    return 0;    
}