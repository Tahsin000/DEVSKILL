//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
void INPUT(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    #ifndef ONLINE_JUDGE 
    freopen("inputf.in", "r", stdin); freopen("outputf.in", "w", stdout); 
    #endif
}
ll mod = 1e9+7;
ll binExpRecur(ll b, ll p){
    if (p == 0) return 1;
    ll res = binExpRecur(b, p/2);
    if (p&1){
        return (b * ((res * res) % mod)) % mod;
    } 
    else {
        return (res * res) % mod;
    }
}
void BINARY_EXPONENTIATION(){
    ll a, b;
    cin >> a >> b;
    cout << binExpRecur(a, b) << endl;
}
int main()
{
    BINARY_EXPONENTIATION();
    return 0;
}

