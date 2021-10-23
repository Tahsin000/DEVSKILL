
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
struct point2D
{
    ll x, y;
    /* constractior */
    point2D(){}
    point2D(ll _x,ll _y){
        x = _x; y = _y;
    } 
    /*Operator Overloading (+) */
    point2D operator + (const point2D& q)const{
        point2D res ;
        res.x = x + q.x;
        res.y = y + q.y;
        return res;
    }
    /*Operator Overloading (*) */
    point2D operator * (const point2D& q)const{
        point2D res ;
        res.x = x * q.x;
        res.y = y * q.y;
        return res;
    }
    // /*Operator Overloading (<) */
    // bool operator < (const point2D& q)const{
    //     return (x < q.x);
    // }
    /*Operator Overloading coustom(<) */
    bool operator < (const point2D& q)const{
        if (y == q.y) return x < q.x;
        else return y < q.y;
    }
};

int main()
{
    INPUT();
    /*Operator Overloading (+) */
    point2D a, b, res;
    
    a.x = 5;
    a.y = 6;
    b.x = 11;
    b.y = 5;
    res = a + b;
    cout << res.x << " " << res.y << endl;

    /*Operator Overloading (*) */
    res = a * b ;
    cout << res.x << " " << res.y << endl;

    /*Operator Overloading (<) */
    if (a < b) cout << "a choto\n";
    else cout << "a choto na \n";

    /*Operator Overloading coustom(<) */
    vector<point2D>v;
    v.pb(point2D(5,11));
    v.pb(point2D(1,2));
    v.pb(point2D(2,-12));
    v.pb(point2D(2,5));
    v.pb(point2D(2,3));
    v.pb(point2D(50,-11));
    v.pb(point2D(50,11));

    sort(all(v));
    for(auto x : v){
        cout <<x.x << " " << x.y << endl;
    }
    return 0;
}
