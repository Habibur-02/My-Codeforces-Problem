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
void solve12(int n)
{
    bool has=true;
    bool dot=false;
    for(int i=1;i<=n;i++)
    {
        if(i%2) cout<<"##";
        else cout<<"..";

    }
cout<<nl;

}
void solve34(int n)
{
    bool has=true;
    bool dot=false;
    for(int i=1;i<=n;i++)
    {
        if(i%2) cout<<"..";
        else cout<<"##";

    }
  cout<<nl;

}
int32_t main()
{ fast
int t;
cin>>t;

while(t--)
{


int n;
cin>>n;

for(int i=1;i<=2*n;i++)
{
    if(i==1 || i==2 || i==5 || i==6 || i==9 || i==10 || i==13 || i==14 || i==17 || i==18 || i==21 || i==22 || i==25 || i==26 || i==29 || i==30 || i==33 || i==34 || i==37 || i==38)
    solve12(n);
    else solve34(n);


}


}







}





