#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1000000007
#define db(x)           cout << #x << " : " << x << endl;
#define faster          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define py              cout << "YES\n"
#define pn              cout << "NO\n"
#define all(n)          n.begin(), n.end()
#define pb              push_back
#define sz(n)           n.size()
ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}
ll gcd(ll a, ll b) {return(b==0)?a:gcd(b, a%b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
void INPUT(){
    faster ios_base::sync_with_stdio(false); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r+", stdin); freopen("outputf.in", "w+", stdout);
    #endif
}

#define m 45
// BIG MOD CALCULATION : https://www.wolframalpha.com/

ll modExpo(ll a, ll b){
    if (b == 1)return a;
    if (b == 0) return 1;
    if (b % 2 == 0){
        ll ans = modExpo(a, b / 2);
        return (ans % m * ans % m) % m;
    }
    if (b % 2 != 0){
        return (a % m * modExpo(a, b -1) % m) % m;
    }
}

void solve(){
    ll ans = modExpo(5, 100);
    cout << ans << endl;
}
int main()
{
    INPUT();
    solve();
    return 0;
}
