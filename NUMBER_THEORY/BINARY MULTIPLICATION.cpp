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


ll binMultiply(ll a, ll b){
    ll ans = 0;
    while(b){
        if (b & 1){
            ans = (ans + a) % mod;
        }
        a = (a + a) % mod ;
        b >>= 1;
    }
    return ans ;
}
void binExpIter(){
    ll b, p; cin >> b >> p;
    ll ans = 1;
    while(p){
        if (p & 1){
            ans = binMultiply(ans , b) % mod;
        }
        b = binMultiply(b , b) % mod;
        p >>= 1;
    }
    cout << ans << endl;
}
int main()
{
    // binMultiply(10, 10);
    binExpIter();
    return 0;
}

