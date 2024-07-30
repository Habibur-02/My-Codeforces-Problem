#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        int n,x,y;
// string s;
        cin>>n>>x>>y;

        int d=y-x;
        vector<int>v;
        for(int i=1; i*i<=d; i++)
        {
            if(d%i==0)
            {
                v.push_back(i);
                if(i*i!=d)
                    v.push_back(d/i);

            }

        }
        sort(v.begin(),v.end());
//for(auto j:v) cout<<j<<" ";
//cout<<'\n';
        vector<int>s;
        for(int i=0; i<v.size(); i++)
        {
            if(y-v[i]*(n-1)<=x)
            {
                int p=y;
                int k=1;
                while(p>=1 && k<=n)
                {
                  cout<<p<<" ";
                  //  s.push_back(p);
                    p-=v[i];
                    ++k;
                }
                if(k<n)
                {
                    int u=n-k;
                    for(int q=1; q<=u; q++)
                    {
                        cout<<y+v[i]*q<<" ";
                        //s.push_back(y+v[i]*q);
                    }


                }

                cout<<'\n';
                break;
            }


            //break;

        }
//for(auto b:s)





        }


    }

