#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int f[100];
bool cmp[100];
int fibo(int n)
{

    if(n==0) return 0;
    if(n==1) return 1;
if(cmp[n]==true) return cmp[n];
    return f[n]=fibo(n-1)+fibo(n-2);
    cmp[n]==true;



}
int32_t main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int n;
  cin>>n;

 cout<<fibo(n)<<nl;



}


