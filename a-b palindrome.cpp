#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    s='@'+s;
    map<int,char>m;
int n=a+b;
int z=a,o=b;
for(int i=1;i<=n;i++)
{
    if(s[i]=='0') z--;
    else if(s[i]=='1') o--;
}
cout<<z<<" "<<o<<nl;
    for(int i=1;i<=(a+b);i++)
    {

        //cout<<s[i];

        if(s[i]=='?' && s[n-i+1]!='?')
        {

            s[i]=s[n-i+1];
            if(s[i]=='1') o--;
            else z--;
        }


    }

//cout<<z<<" "<<o<<nl;


     cout<<z<<"  "<<o;

//cout<<z<<" "<<o;
    for(int i=1;i<=n;i++)
    {

        cout<<s[i];

    }

}

