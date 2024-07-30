#include<bits/stdc++.h>
using namespace std;
int main()

{


  long long  b;
  cin>>b;
  int dec=0,i=0;
  while(b!=0)
  {
      dec+=(b%10)*pow(2,i);
      i++;
      b/=10;



  }

  cout<<dec<<endl;

  vector<int>v;
  while(dec!=0)
  {
      v.push_back(dec%16);
      dec/=16;


  }
reverse(v.begin(),v.end());




for(auto j:v)
{
if(j==10)
    cout<<"A";
else if(j==11) cout<<"B";
else if(j==12) cout<<"C";
        else if(j==13) cout<<"D";
else if(j==14) cout<<"E";
    else if(j==15) cout<<"F";
else
cout<<j;
}


}
