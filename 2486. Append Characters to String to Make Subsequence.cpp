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
  string a="abcde";
  string b="abjjjk";

    int ans=0;
    int p=0;

    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[p] && p<b.size())
        {
            p++;

        }


    }

   if(p==b.size()) cout<<0<<'\n';
   else  cout<<b.size()-p<<'\n';







}






