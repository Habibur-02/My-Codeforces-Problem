#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=-1;
    map<char,int>m;

    for(int i=0;i<s.size();i++)
    {

        m[s[i]]++;


    }
     for(char i='a';i<'z';i++)
    {

        if(m[i]==0)

        {
            c=0;
            cout<<"NO"<<endl;
            break;
        }

    }
    if(c==-1) cout<<"YES"<<endl;




    }
