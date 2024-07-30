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
int32_t main()
{ fast

int t;
cin>>t;
while(t--)
{


 int n;
 cin>>n;
 map<int,int>m;

 for(int i=1;i<n;i++)
 {
     int a,b;
     cin>>a>>b;
     m[a]++;
     m[b]++;

 }

   int c=0;
   for(auto [i,j]:m) if(j==1)c+=j;
   //cout<<c;
   //return 0;

   cout<<ceil((double) c/(double) 2)<<'\n';


}






}





