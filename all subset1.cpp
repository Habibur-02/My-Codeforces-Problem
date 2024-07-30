#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};

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
unordered_map<ll,ll>m,m1;

vector<ll> findAllSums(vector<ll>& nums,ll start,ll end,ll offset){
        vector<ll> res;
        ll n=end-start+1;
        for(ll i=0;i<(1<<n);++i){
            ll sum=0;
            for(ll j=0;j<n;++j){
                if(i&(1<<j))
                    sum+=nums[j+offset];
            }
            res.push_back(sum);
            if(start!=0 )
            m[sum]++;
            else m1[sum]++;
        }
        return res;
    }

int32_t main()
{ fast

ll n,x;
cin>>n>>x;

//int ar[n+3];
vector<ll>nums(n+3);
for(ll i=0;i<n;i++) cin>>nums[i];

//vector<int>first=findAllSums()

  vector<ll> firstHalf = findAllSums(nums,0,n/2-1,0);
        vector<ll> secondHalf = findAllSums(nums,n/2,n-1,n/2);
        sort(secondHalf.begin(),secondHalf.end());


     /*   for(auto k:secondHalf)  cout<<k<<" ";
        cout<<nl;

        for(auto l:firstHalf) cout<<l<<" "; */


            //for(auto )
           // int x=9;
            ll c=0;

        /*   for(int i=0;i<firstHalf.size();i++)
        {

     if(m.find(x-firstHalf[i])!=m.end()) c++;


        }

        //cout<<firstHalf.size(); */
           if(m.find(x)!=m.end()) c+=m[x];
         if(m1.find(x)!=m1.end()) c+=m1[x];

           for(auto [i,j]:m)
           {

               if(m1.find(x-i)!=m1.end()) c+=m1[x-i];


           }






        cout<<c<<nl;



      // for(auto [i,j]:m) cout<<i<<" "<<j<<nl;










}





