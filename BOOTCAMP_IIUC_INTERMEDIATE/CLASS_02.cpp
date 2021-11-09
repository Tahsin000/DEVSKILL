//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long

/* Start Your CODE*/
void euler_totient_fun_01()
{
    // Not Efficient 
    // Time complexity : O(n);

    ll n, c=0;
    cin >> n;
    for(ll i=1; i<=n; i++)
    {
        if (__gcd(i, n) == 1) c++;
    }
    cout << c << endl;
}

void euler_totient_fun_02(){
    // Efficient Code_time 
    // Time complexity : SqrtRootOf(n)

    ll n; cin >> n;
    ll tmp = n;
    for(ll i = 2; i*i<= n; i++)
    {
        if (n % i == 0)
        {
            while(n % i == 0)
            {
                n /= i;
            }
            tmp = tmp / i;
            tmp = tmp * (i - 1);
        }
    }

    if(n > 1)
    {
        tmp = tmp /n;
        tmp = tmp * (n - 1);
    }
    cout << tmp << endl;
}

ll phi[1000100];
bool vis[1000100];
void euler_totient_fun_03(){
    // precalculation seive [euler totient function]
    // so efficient
    // Time complexity : Nlg(n)
    ll n = 1e5; 
    ll in; cin >> in;
    for(ll i=1; i<= n; i++) phi[i] = i;
    for(ll i=2; i<=n; i++)
    {
        if(vis[i]) continue;
        for(ll j = i; j<=n; j+= i)
        {
            vis[j] = true;
            phi[j] = phi[j] / i;
            phi[j] = phi[j] * (i - 1);
        }
    }
    cout << phi[in] << endl;
}

void sum_of_all_phi_value(){
    // sum of all phi value ( precalculation seive  );
    // Time complexity : O(N * Nlg(n))
    ll n = 1e5; 
    ll in; cin >> in;
    for(ll i=1; i<= n; i++) phi[i] = i;
    for(ll i=2; i<=n; i++)
    {
        if(vis[i]) continue;
        for(ll j = i; j<=n; j+= i)
        {
            vis[j] = true;
            phi[j] = phi[j] / i;
            phi[j] = phi[j] * (i - 1);
        }
    }
    ll sum = 0;
    for(ll i = 1; i<= in; i++) {
        sum += phi[i];
        cout << phi[i] << " ";
    }
    cout << sum << endl;
}

int main()
{
    sum_of_all_phi_value();
    // euler_totient_fun_03();
    // euler_totient_fun_02();
    // euler_totient_fun_01();

    // cerr << "Time takeen : " << (float)clock()/CLOCKS_PER_SEC << " secs\n";time_t ttime = time(0); char* dt = ctime(&ttime);cerr << dt << endl;
    return 0;
}