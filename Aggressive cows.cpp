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
int solve(int mid,vector<int> & v,int c)
{
    int pos=0;
    c--;
    for(int i=0;i<v.size();i++)
    {
        int l=lower_bound(v.begin(),v.end(),pos+mid);
       // c--;
       if(c==0) break;
       if(l==v.end())
       {
           break;

       }
    else
    {
        c--;

    }



        return (c==0);







    }





}
int32_t main()
{ fast


 int n,c;
 cin>>n>>c;
 vector<int>v;

 for(int i=0;i<n;i++)
 {
     int j;
     cin>>j;
 v.push_back(j);

 }
 sort(v.begin(),v.end());
 //for(auto j:v) cout<<j<<" ";

 int i=0,j=1e9;

 while(j-i>1)

{
    int mid=(i+j)/2;
    if(solve(mid,v,c)) i=mid;
    else j=mid-1;



}

if(solve(i,v,c)) cout<<mid;
else cout<<j;





}





