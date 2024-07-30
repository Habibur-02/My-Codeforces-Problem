#include<bits/stdc++.h>
using namespace std;
//int n,m;
int main()
{


	int n;
	cin>>n;
	int ar[n+3];
	for(int i=1;i<=n;i++) cin>>ar[i];

	sort(ar+1,ar+1+n);


  int a=0,b=0;
bool oka=true,okb=true;


int i=1,j=n;

while(i<j)
{

if(oka==true)
{

a+=ar[i]+ar[j];
i++;
j--;

oka=false;
okb=true;


}
else
{

	b+=ar[i]+ar[j];
	i++;
	j--;
	okb=false;
	oka=true;
}


}


          if(n%2==0)
          {
          	cout<<abs(a-b)<<'\n';

          }
          else
          {

              cout<<min(a,b)+ar[n/2+1]-max(a,b)<<'\n';


          }




}
