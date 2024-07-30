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
int32_t main()
{ fast


int n,m;
cin>>n>>m;

//int ar[n+3];
vector<int>v;
int br[m+3];
for(int i=1;i<=n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);

}
for(int i=1;i<=m;i++) cin>>br[i];

sort(v.begin(),v.end());

for(int i=1;i<=m;i++)
{
    cout<<upper_bound(v.begin(),v.end(),br[i])-v.begin()<<'\n';


}









}





