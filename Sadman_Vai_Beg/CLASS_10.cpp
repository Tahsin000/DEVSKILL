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
ll Pow(ll b, ll p) { return p == 0 ? 1 : b * Pow(b, p - 1); }
ll gcd(ll a, ll b) { return(b == 0) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
bool Not_prime[1000];

void INPUT() {
    faster ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE 
    freopen("inputf.in", "r", stdin); freopen("outputf.in", "w", stdout);
#endif
}
bool isPrime(ll n) {
    if (n < 2) return 0;
    for (ll i = 2;i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
void Prime() {
    ll n; cin >> n;
    if (isPrime(n)) cout << "Prime number\n";
    else cout << "Not Prime number\n";
}
void Sivev() {
    // //Aprose -- 01
    ll n; cin >> n;
    // for(ll i=1; i<=n; i++){
    //     cout << i << " "<< isPrime(i) <<" \n";
    // }
    // cout << "\n";

    // Aprose -- 02
    memset(Not_prime, 0, 1000);
    Not_prime[1] = 1;
    // for(ll i=2; i<=1000; i+=2)Not_prime[i] = 1;
    for (ll i = 2; i <= 1000;i++) {
        if (!Not_prime[i]) {
            for (ll j = i + i; j <= 1000; j += i) {
                Not_prime[j] = 1;
            }
        }
    }
    for (ll i = 1; i <= n; i++) cout << i << " " << Not_prime[i] << " \n";
}


int main()
{
    INPUT();
    Sivev();
    // Prime();
    /*
    * Topic (number theary)
        1. Prime number
        2. Divisor
        3. GCD, LCM
        4. Modular Arithmetic
    */

    return 0;
}
