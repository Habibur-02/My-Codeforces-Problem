#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    vector<int>v1,v2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)

    {
        int a;
        cin>>a;
        //v.push_back(a);
        if(a==1)
           {

            v1.push_back(a);}
        else
            {v2.push_back(a);}


    }
    int ans1=0;
int ans2=0;
for(int i=0;i<v1.size();i++)
{
    ans1=ans1+v1[i];
}
for(int i=0;i<v2.size();i++)
{
    ans2=ans2+v2[i];
}

//cout<<v1.size()<<endl;

 if((v1.size())%2==0&&(v2.size()==0))
    {
        cout<<"YES";
    }
    else if((v2.size())%2==0&&(v1.size()==0))
    {
        cout<<"YES";
    }


else if(ans1==ans2||ans2==2*ans1)
{
    cout<<"YES";
}
else cout<<"NO";

}


}
