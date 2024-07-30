#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define s_i stoi(string s)
#define i_s to_string(num)
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};
int prime(int n)
{
    bool ok=true;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ok==false;
        }
    }

    (ok)?return true:return false;



}
int32_t main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,m;
  cin>>n>>m;
  int ar[n+3];
  for(int i=0;i<n;i++) cin>>ar[i];
  //int j=0;
  int k=0;
  int p++;
  for(int i=0;i<n;i++)
  {
     // if(ar[i])

     for(int j=i+1;j<n;j++)
     {
         if(ar[j]%ar[i]==0)
         {
             k++;

         }
         else p++;


     }

  }









}


