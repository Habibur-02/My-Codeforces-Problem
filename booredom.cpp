#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};
char dir[]={'R','U','L','D'};
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
map<int,int>m;
const int N=1e5+9;
ll dp[N];
ll solve(ll i)
{
    if(i==1) return m[1];
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];


    return dp[i]=max(solve(i-1),solve(i-2)+m[i]*i);


}
int32_t main()
{ fast

int n;
cin>>n;
int ar[n+3];
for(int i=1;i<=n;i++)
{
    cin>>ar[i];
    m[ar[i]]++;

}
memset(dp,-1,sizeof dp);
if(n==1) cout<<ar[1];
else if(m.size()==1) cout<<m[ar[1]]*m.size();
else

cout<<solve(n);








}





