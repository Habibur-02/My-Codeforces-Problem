#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int long long int
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int power(int x, int y, int MOD = INF) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2) % MOD) % MOD;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    int MOD = power(10, 9) + 7;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            v.push_back(i+1);
        }
        if (n%2==0){
            for (int i = 0; i < n; i+=2) {
                swap(v[i],v[i+1]);
            }
            for (int i = 0; i < n; ++i) {
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        } else{
            for (int i = 0; i < n - 3; i+=2) {
                swap(v[i],v[i+1]);
            }
            for(int i =0;i<n-3;i++){
                cout<<v[i]<<" ";
            }
            cout<<v[n-2]<<" "<<v[n-1]<<" "<<v[n-3]<<"\n";
        }
    }
}
