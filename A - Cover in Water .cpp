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
#define pb push_back
#define no cout << "NO\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
int32_t main()
{ fast

int t;
cin>>t;
while(t--)
{



 int n;
 cin>>n;
string s;
cin>>s;

bool ok3=false;
int dot=0;

  for(int i=0;i<s.size();i++)
  {
 
 if(i+2<n)
 {


  	if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
  	{
       
       ok3=true;

  	}


  }
    if(s[i]=='.') dot++;
  }
 

  
   if(ok3) cout<<2<<'\n';
   else cout<<dot<<'\n';



}

}
