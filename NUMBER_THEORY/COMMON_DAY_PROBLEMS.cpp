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
int main()
{
    INPUT();
    /* time complex O(N^ 2)
    Codeforces Article for question i Explained
    LINK : https://codeforces.com/blog/entry/73558
     */
    
    ll n; cin >> n;
    vector<ll>masks(n, 0);
    for(ll i=0; i<n; i++){
        ll mask = 0;
        ll NumerOfWorker; cin >> NumerOfWorker;
        for(ll j=0; j<NumerOfWorker; j++){
            ll day ; cin >> day;
            mask = (mask | (1 << day));
        }
        masks[i] = mask;
    }
    ll max_comon_days = INT_MIN;
    pair<ll, ll>person;
    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            ll intersection = (masks[i] & masks[j]);
            ll comon_bits = __builtin_popcount(intersection);
            // cout << i << " " << j << " ->" << comon_bits << endl;
            if (max_comon_days < comon_bits){
                max_comon_days = comon_bits;
                person.first = i;
                person.second = j;
            }
        
        }
    }
    cout << "first person -> " << person.first << " , second person -> " << person.second << endl; 
    cout << "Common day : " << max_comon_days << endl;

    return 0;
}

/*
** user input 

5
4
1 4 7 9
6
2 9 1 7 25 29
7
1 24 4 7 9 11 29
10
2 28 8 7 9 10 30 21 18 19
4
1 11 29 7

** Output
first person -> 0 , second person -> 2
Common day : 4


set bit and binary representation
5
1 4 7 9
1010010010

2 9 1 7 25 29
100010000000000000001010000110

1 24 4 7 9 11 29
100001000000000000101010010010

2 28 8 7 9 10 30 21 18 19
1010000001011000000011110000100

1 11 29 7
100000000000000000100010000010
 */