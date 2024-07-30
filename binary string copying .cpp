#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
int main()
{

 string a,s[4];

//a='@';
 cin>>a;
 int l,r;

 int j=1;
 int u=4;
 while(u--)
 {
cin>>l>>r;
s[j]='@';
 for(int i=l;i<=r;i++)
 {

     s[j]+=a[l-1];



 }
 sort(s[j].begin(),s[j].end());
 j++;

 }

 int c=0;
 for(int i=1;i<4;i++)
 {
     if(s[i]==s[i+1]) c++;


 }
 cout<<c<<nl;

}
