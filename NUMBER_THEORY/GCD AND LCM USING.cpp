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
ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a % b);
}
void GCD(){
    ll a , b; cin >> a >> b;
    // reaction GCD
    // Time com :log(n)
    cout << gcd(a, b) << endl;

    // LCM Time com : O(log(n))
    ll ans = (a * b) / gcd(a , b) ;
    cout << ans << endl;

    // building GCD Time com : log(n)
    cout << __gcd(a, b) << endl;
    
}
int main()
{
    GCD();
    return 0;
}

