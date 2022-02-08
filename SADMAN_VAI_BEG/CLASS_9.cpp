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
    freopen("inputf.in", "r", stdin); freopen("outputf.in", "w", stdout); 
    #endif
}
void single_Element_Problem(){
    /*
    counting single value with memory Optimisation*/ 
    ll n; cin >> n;
    vector<ll>v(n);
    for(auto &x : v) cin >> x;
    ll xo = 0;
    for(ll i=0; i<n; i++){
        xo ^= v[i];
    }
    cout << xo << endl;
}
void Int_To_String(){
    ll n; cin >> n;
    string s;
    stringstream ss;
    ss << n;
    ss >> s;
    cout <<"(s): " << s << endl; 

}
void String_To_Int(){
    string s; cin >> s;
    ll n;
    stringstream ss;
    ss << s;
    ss >> n;
    cout <<"(n): " << n << endl; 

}
void Substring (){
    string s; cin >> s;
    ll a, b; cin >> a >> b;
    string subString = s.substr(a, b);
    cout << subString << endl; 
}
void String_Search_Problem(){
    string s; cin >>s;
    string checkString; cin >> checkString;
    for(ll i=0; i<sz(s); i++){
        string kata_string = s.substr(i, (int)sz(checkString));
        if (checkString == kata_string) cout << i << "\n";
    }
    /*
    input : 01
    aabaaa
    aa

    output : 01
    0
    3
    4

    input : 02 
    xyzz
    yz

    output : 02
    1

    input : 03
    abc
    xyz

    output : 03
    
    */
}
void UVA_483(){
    string s;
    while (getline(cin , s))
    {
        stringstream ss;
        ss << s;
        ll cnt= 0;
        string f;
        while (ss >> f)
        {
            cnt++;
        }
        // cout << cnt << " ";
        stringstream g; g << s;
        while (g >> f)
        {
            reverse(all(f));
            cout << f ;

            if (cnt != 1){
                cout <<" ";
                cnt--;
            }
        }
        cout << "\n";
    }    
}
void Decimal_To_Binary_Using_Bitwise_operator(ll n){
    vector<ll>v;
    while (n)
    {
        v.pb(n&1);
        n = (n >> 1);
    }
    for(ll i = sz(v)-1; i>=0; i--) cout << v[i] << " ";
}
void GetBit(){
    ll n, pos; cin >> n >> pos;
    bool ans = (n & (1 << pos));
    (ans) ? cout << "1\n" : cout << "0\n";
    // cout << (1 << 2) << endl;
}
void SetBit(){
    ll n, pos; cin >> n >> pos;
    ll ans = (n | (1 << pos));
    cout << ans << endl;
}  
void ClearBit(){
    ll n, pos; cin >> n >> pos;
    ll ans = ~(1 << pos);
    cout << (n & ans) << endl;
}
void UpdateBit(){
    ll n, pos, u; cin >> n >> pos >> u;
    ll mask = ~(1 << pos);
    n = n & mask;
    ll ans = n | (u << pos);
    cout << ans << endl;
}
void BitCount(){
    // custom function with counting BITs; 
    ll n , cnt=0; cin >>n;
    for(ll i=15; i>=0; i--){
        cnt += (bool)(n & (1 << i));
    }
    cout << cnt << endl;

    // Builtin function counting BITs;
    ll ans = __builtin_popcount(n);
    cout << ans << endl;
}

int main()
{
    INPUT();
    BitCount();
    // UpdateBit();
    // ClearBit();
    // SetBit();
    // GetBit();
    // Decimal_To_Binary_Using_Bitwise_operator(12);
    // UVA_483();
    // String_Search_Problem();
    // Substring();
    // String_To_Int();
    // Int_To_String();
    // single_Element_Problem();
    
    return 0;
}
