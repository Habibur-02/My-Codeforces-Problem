#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    int a,b;
    cin>>a>>b;
    int n=a+b;
    string s;
    cin>>s;
    s='@'+s;
    vector<int>v;
    map<int,char>m;
    for(int i=1;i<=n;i++)
    {
        if(s[i]=='1') b--;
        else if(s[i]=='0') a--;
        else v.push_back(i);
    }
    if(a==0 || b==0) cout<<-1;

}
