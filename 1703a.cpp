#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
   int t;
  cin>>t;

       while(t--)
  {


    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        s[i]=toupper(s[i]);
    }
    int q=s.size();
//transform(s.begin(), s.end(),s.begin(),toupper);





   if(s[0]=='Y'&&s[1]=='E'&&s[2]=='S')
    cout<<"YES"<<endl;

    else  cout<<"NO"<<endl;}

}
