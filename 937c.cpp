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
int t;
cin>>t;
while(t--)
{



 string s;
 cin>>s;
 int  c1=s[0]-'0';
 int  c2=s[1]-'0';
// string a=c1+c2;
int p=c1*10+c2;


 if(p==12) cout<<s<<" "<<"PM"<<'\n';
 else if(p>12)
 {
     if(p-12<10)
     cout<<"0"<<p-12<<":"<<s[3]<<s[4]<<" PM"<<'\n';
     else cout<<p-12<<":"<<s[3]<<s[4]<<" PM"<<'\n';


 }
 else if(p==0) cout<<"12"<<":"<<s[3]<<s[4]<<" AM"<<'\n';
 else cout<<s<<" AM"<<'\n';



}



}





