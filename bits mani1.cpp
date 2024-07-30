#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    int t;
    cin>>t;
        while(t--)
    {


  long long int a,b;
  cin>>a>>b;

  long long int  x=a|b;
  long long int ans=(a^x)+(b^x);
  //cout<<x<<nl;
  cout<<(7&50)<<nl;
    }
}
