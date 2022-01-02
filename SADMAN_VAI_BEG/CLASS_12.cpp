/*
    __________ TOPIC __________
    1. BITSET_SIEVE 
*/

#include<bits/stdc++.h>
using namespace std;
#define ll              long long
bitset<1000> isPrime;

void BITSET_SIEVE(ll n)
{
    /*
        bitset sieve memory efficiency
    */
    isPrime.reset();
    for(ll i=2; i<=n; i++){
        if (!isPrime[i]){
            for(ll j=i*i; j<=n; j+=i){
                isPrime[j] = 1;
            }
        }
    }

}
void PrintPrime(ll n){
    for(ll i=2; i<=n; i++){
        cout << i << " " << isPrime[i] << endl;
    }
}
int main()
{
    BITSET_SIEVE(110);
    PrintPrime(100);
    return 0;
}
