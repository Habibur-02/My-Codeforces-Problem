#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int ar[26];

    memset(ar,0,sizeof(ar));

    int i=0;
    for(char ch='a';ch<='z';ch++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==ch)
        {
            ar[i]+=1;
        }
        }

        i++;


    }
    for(int i=0;i<26;i++)
    {
        cout<<ar[i]*(i+1)<<endl;
    }




}
