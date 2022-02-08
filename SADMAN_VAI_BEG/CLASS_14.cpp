//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1e7+10
#define pb              push_back

ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}
/*
_______________ TOPIC(Recursion) _______________

1. Palindrome - Palindrome();
2. 1-n sum - Sum_1_100();
3. Seriessum - 1^1 + 2^2 + 3^3 + ... n^n - Seriessum();
4. fibonacci series - fibonacci();
*/

// _____________________________________________________________
bool Palindrome_Recursion(string s, ll l, ll r){
    if (l >= r) return 1;
    if (s[l] != s[r]) return 0;
    return Palindrome_Recursion(s, l+1, r-1);
}
void Palindrome(){
    string s; cin >> s;
    cout << Palindrome_Recursion(s, 0, s.size()-1) << endl;
}

// _____________________________________________________________
ll Sum_1_100_Recursion(ll n){
    if (n == 0) return 0;
    return n + Sum_1_100_Recursion(n - 1);
}
void Sum_1_100(){
    ll n; cin >> n;
    cout << Sum_1_100_Recursion(n) << endl;
}

// _____________________________________________________________
ll SeriessumRecursion(ll n){
    if (n == 0) return 0;
    return Pow(n, n) + SeriessumRecursion(n - 1);
}
void Seriessum(){
    ll n; cin >> n;
    cout << SeriessumRecursion(n) << endl;
}

// _____________________________________________________________
ll fibRecursion(ll n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibRecursion(n - 1) + fibRecursion(n - 2);
}
void fibonacci(){
    ll n; cin >> n;
    cout << fibRecursion(n) << endl; 
}
int main()
{
    // fibonacci();
    // Seriessum();
    // Sum_1_100();
    // Palindrome();
    return 0;
}

