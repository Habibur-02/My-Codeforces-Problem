#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
int t;
cin>>t;
while(t--)
{


cin>>s;
for(int i=1;i<s.size();i++)
{
    if(s[i]==s[i+1])
    {


    s.erase(s.begin()+i);}

}
cout<<s<<endl;
}

}
