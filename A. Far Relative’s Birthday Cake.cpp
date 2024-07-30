#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]= {0,-1,0,1,1,-1,-1,1};
int dy[]= {1,0,-1,0,1,1,-1,-1};
char dir[]= {'R','U','L','D'};
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
{
    fast

    int n;
    cin>>n;
    string s[n+2];

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    //int p=0;
    ll ans=0;

    for(int p=0; p<n; p++)
    {

        int k=0;

        for(int i=0; i<n; i++)
            if(s[p][i]=='C') k++;

        if(k>=2)
        {

            ans+=(k*(k-1)/2);



        }
        k=0;
        for(int i=0; i<n; i++)
            if(s[i][p]=='C') k++;

        if(k>=2)
        {

            ans+=(k*(k-1)/2);

        }


    }

  cout<<ans<<'\n';




}





