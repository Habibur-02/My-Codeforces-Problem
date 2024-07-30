#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};

#define nl '\n'
#define s_i stoi(string s)
#define i_s to_string(num)

#define ll_inf (1LL << 62)
#define inf (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);






int32_t main()
{ fast

string s;
cin>>s;

int n=s.size();
   int k=0;





  //cout<<k;

    for(int i=0;i<n;i++)
    {

      //  cout<<i<<" "<<k<<nl;
     // int p=i;

      if(s[i]=='0')
      {

          while(s[i]=='0' && i<n) i++;
          k++;


      }

   // i=p;

    }


    for(int i=0;i<n;i++)
    {

      //  cout<<i<<" "<<k<<nl;
     // int p=i;

      if(s[i]=='1')
      {

          while(s[i]=='1' && i<n) i++;
          k++;


      }

   // i=p;

    }


cout<<k;






}





