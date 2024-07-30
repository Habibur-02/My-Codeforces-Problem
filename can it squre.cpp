#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};

#define nl '\n'
#define s_i stoi(string s)
#define i_s to_string(num)
const ll INF=numeric_limits<ll>::max()-1;
#define ll_inf (1LL << 62)
#define inf (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
bool is_square(ll x) {
    ll l = 1, r = 1e9;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(mid * mid == x) return true;
        if(mid * mid > x) r = mid - 1;
        else l = mid + 1;
    }
    return false;
}
void solve() {
    ll n; cin >> n;
    ll s = 0;
    for(int i = 0, x; i < n; ++i) {
        cin >> x; s += x;
    }
    if(is_square(s)) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main()
{ fast




 int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }





}




