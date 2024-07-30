#include<bits/stdc++.h>
using namespace std;
int main()
{



 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 int op=0;
 int j;
    for(int i=0;i<n;i++)
    {

      if(s[i]=='B')
      {
          if(i+k<n)
          {

              for(j=i;j<k+i;j++)
              {
                  //int q++;

              }
              op++;

          }
          else
          {
              op++;
           break;
          }


      }
      i=j+1;

    }

    cout<<op;





  // i=f;


}
