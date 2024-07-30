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
#define no cout << "NO\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
int binexp1(int a, int b, int m){
	int result = 1;
	while(b>0){
		if(b & 1){
			result = (result  * 1LL * a) % m;
		}
		a = (a * 1LL * a) % m;
		b >>= 1;
	}
	return result;
}

int32_t main()
{ fast
int t;
cin>>t;
while(t--)
{


int n,k;
cin>>n>>k;


 int last=binexp1(n,k,1000);

 double first=pow(10,k*log10(n)-floor(k*log10(n))) * 100.00;

 cout<<floor(first)<<"..."<<setw(3)<<setfill('0') <<last<<'\n';

}









}





