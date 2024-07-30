#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]= {0,-1,0,1,1,-1,-1,1};
int dy[]= {1,0,-1,0,1,1,-1,-1};

#define nl '\n'
#define s_i stoi(string s)
#define i_s to_string(num)
const ll INF=numeric_limits<ll>::max()-1;
#define ll_inf (1LL << 62)
#define inf (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
int32_t main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {


        string s;
        cin>>s;
        if(s[0]==s[s.size()-1] || s.size()%2==1)
        {
            no;
            continue;
        }
        int n=s.size();
        map<int,int>m;

        m[s[0]]=1;
        m[s[n-1]]=-1;
        char c;
        for(int i=1; i<n-1; i++)
        {
            if(s[0]!=s[i] && s[n-1]!=s[i])

                c=s[i];
        }
        bool ok=true;
//cout<<c;
        for(int i=0; i<2; i++)
        {

            if(i==0)

            {

                m[c]=1;
                int   ans=0;
                for(int i=0; i<n; i++)
                {
                    ans+=m[s[i]];

                    if(ans<0)
                    {
                        ok=false;
                        break;
                    }


                }
                if(ans==0)
                {
                    break;
                }

            }
            else
            {

                m[c]=-1;
                int    ans=0;
                for(int i=0; i<n; i++)
                {
                    ans+=m[s[i]];

                    if(ans<0)
                    {
                        ok=false;
                        break;
                    }


                }
                if(ans==0)
                {
                    break;
                }




            }

        }
        if(ok) yes;
        else no;

    }





}





