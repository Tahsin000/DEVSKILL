//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1e7+10
#define pb              push_back

ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}
/*
_______________ TOPIC _______________

1. Basics of Factors and Divisors related -     Divisors_related()
2. Prime Factorisation - function is -          Prime_Factorisation()
3. How to find prime numbers optimally -        Prime_check()             
4. Lowest and highest prime number checking -   low_and_High_prime()


*/
void Divisors_related(){
    ll n;
    cin >> n;
    ll cnt , sum; sum = cnt = 0;
    for(ll i=1; i*i<=n; i++){
        if (n % i == 0){
            cnt ++;
            sum += i;
            if (n / i != i){
                sum += n / i;
                cnt++;
            }
        }
    }
    cout << cnt << " " << sum << endl;
}
void Prime_Factorisation(){
    ll n; cin >> n;
    std::vector<ll> Factor;
    for(ll  i=2; i*i<=n; i++){
        while(n % i == 0){
            Factor.pb(i);
            n /= i;
        }
    }
    if (n > 1) {
        Factor.pb(n);
    }

    for(auto x : Factor) cout << x << " ";

}

// _________________________________________________
vector <bool> isPrime(MX, 1);

void Prime_check(){
    isPrime[0] = isPrime[1] = false;
    for(ll i=2; i*i< MX; i++){
        if (isPrime[i] == true){
            for(ll j=2*i; j<MX; j+=i){
                isPrime[j] = false;
            }
        }
    }

    ll q; cin >> q;
    while(q--){
        ll n;
        cin >> n;
        if (isPrime[n]) cout << "Prime\n";
        else cout << "Not Prime\n";
    }

}
// _________________________________________________
std::vector <ll> Hp(MX);
std::vector <ll> Lp(MX);
void low_and_High_prime(){
    isPrime[0] = isPrime[1] = false;
    for(ll i=2; i*i< MX; i++){
        if (isPrime[i] == true){
            Lp[i] = Hp[i] = i;
            for(ll j=2*i; j<MX; j+=i){
                isPrime[j] = false;
                Hp[j] = i;
                if (Lp[j] == 0){
                    Lp[j] = i;
                }
            }
        }
    }

    for(ll i=0; i<100; i++) cout << Lp[i] << " " << Hp[i] << endl;
        
}
int main()
{
    low_and_High_prime();
    // Prime_check();
    // Prime_Factorisation();
    // Divisors_related();
}

