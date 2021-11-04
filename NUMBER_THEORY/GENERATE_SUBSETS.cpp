//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define all(n)          n.begin(), n.end()

void INPUT(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    #ifndef ONLINE_JUDGE 
    freopen("inputf.in", "r", stdin); freopen("outputf.in", "w", stdout); 
    #endif
}

int main()
{
    INPUT();
    // Subsets GENERATE 
    ll n; cin >> n;
    vector<ll>v(n); for(auto &x : v) cin >> x;
    for(ll i=1; i<=(1 << n); i++){
        for(ll j=0; j<n; j++){
            if (i & (1 << j)) cout << v[j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/* 
PROBLEM :https://codeforces.com/blog/entry/73558

    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> ans;
        int n = nums.size();
        for(int i=1; i<=(1 << n); i++){
            vector<int>tmp;
            for(int j=0; j<n; j++){
                if (i & (1 << j)) tmp.push_back(nums[j]);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
 */