#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        v.push_back(b);
    }
    int a=*max_element(v.begin(),v.end());
    int b=*min_element(v.begin(),v.end());
    cout<<abs(a-b)<<endl;


}
}
