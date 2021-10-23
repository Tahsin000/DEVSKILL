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
void Problem_01(){
    /*
        Problem : Given  N int numbe, Find how many triplets are there such that A+B+C=0
    */
    ll n, cnt = 0;
    cin >> n;
    map<ll, ll>mp;
    vector<ll>v(n); for(auto &x : v){
        cin >> x;
        mp[x] = 1;
    }

    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
             ll tmp = v[i] + v[j];
            if (mp[-tmp] == 1) cnt++;
        } 
    }
    cout << cnt << endl;
}
void Priority_queue_ascending(){
    /*
        value sort in ascending order
    */ 
    priority_queue<ll>pq;
    pq.push(5);
    pq.push(-5);
    pq.push(50);
    pq.push(10);
    pq.push(2);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
void Priority_queue_descending (){
    /*
        value sort in descending order
    */ 
    priority_queue<ll, vector<ll>, greater<ll>>pq;
    pq.push(5);
    pq.push(-5);
    pq.push(50);
    pq.push(10);
    pq.push(2);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
int main()
{
    INPUT();
    /*
        Problem : Given  N int numbe, Find how many triplets are there such that A+B+C=0
    */
    // value sort in ascending order
    // value sort in descending order
    return 0;
}
