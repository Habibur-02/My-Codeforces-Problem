#include<bits/stdc++.h>
using namespace std;
#define i-s to_string(num)
#define s-i stoi(s)
const int N=1e5;
int main()
{
 int n;
 cin>>n;

 int ar[n+3];
 for(int i=0;i<n;i++) cin>>ar[i];

 string s;
 int u=0;
 while(u<n)
 {


 s+=to_string(ar[u]);
 u++;
 }


 cout<<s<<endl;
 string sss="13728";

 int t=stoi(sss);

 cout<<t;


}
