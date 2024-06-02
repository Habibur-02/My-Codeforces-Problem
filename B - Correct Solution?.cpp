#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};
char dir[]={'R','U','L','D'};
#define nl '\n'
#define s_i stoi(string s)
#define i_s to_string(num)
const ll INF=numeric_limits<ll>::max()-1;
#define ll_inf (1LL << 62)
#define inf (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define yes cout << "YES\n"
#define pb push_back
#define no cout << "NO\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
int32_t main()
{ fast
 

 int len,i,pos;
    string a,b;

    while (cin >> a >> b)
    {
        string ans;

        if (a == "0")
            ans = "0";
        else
        {
            sort (a.begin(),a.end());

            if (a[0] == '0')
            {
                len = a.length();
                pos = 0;

                string x,y,z;

                for (i=0; i<len; i++)
                {
                    if (a[i] == '0')
                        y += "0";
                    else
                    {
                        x.pb(a[i]);
                        pos = i;
                        break;
                    }
                }

                for (i=pos+1; i<len; i++)
                    z.pb(a[i]);

                ans = x+y+z;
            }
            else
                ans = a;
        }

        if (ans == b)
            cout << "OK" << endl;
        else
            cout << "WRONG_ANSWER" << endl;

    }


}

