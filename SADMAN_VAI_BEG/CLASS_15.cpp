//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1e7+10
#define pb              push_back

ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}
/*
_______________ TOPIC(Marge Sort) _______________
1. margeSort();
*/

// _____________________________________________________________
ll Marge(vector<ll> &v,ll l, ll mid, ll r){
    ll n1 = mid - l + 1;
    ll n2 = r - mid;

    ll tmpL[n1], tmpR[n2];
    for(ll i=0; i<n1; i++){
        tmpL[i] = v[l + i];
    }
    for(ll i=0; i<n2; i++){
        tmpR[i] = v[mid + i + 1];
    }
    ll i, j, k;
    i = j = 0;
    k = l;
    while(i < n1 && j < n2){
        if (tmpL[i] <= tmpR[j]){
            v[k] = tmpL[i];
            i++; 
        }
        else {
            v[k] = tmpR[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        v[k] = tmpL[i];
        i++;
        k++;
    }
    while(j < n2){
        v[k] = tmpR[j];
        j++;
        k++;
    }
}
// _____________________________________________________________
void MargeSortMain(vector<ll> &v, ll l, ll r){
    if (l < r){
        ll mid = (l + r) / 2;
        MargeSortMain(v, l, mid);
        MargeSortMain(v, mid+1, r);
        Marge(v, l, mid, r);
    }
}
void MargeSort(){
    ll n; cin >> n;
    std::vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    MargeSortMain(v, 0, n - 1);
    for(auto x : v) cout << x << endl;
}
int main()
{
    MargeSort();
    return 0;
}

