#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {



    string s;
    cin>>s;
    char ch='a';
    int k=-1;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==ch)
         {
            ch++;
        k=i;
        break;
         }
    }



        if(k==-1)
        {
            cout<<"NO"<<endl;



        }
        else
        {

            int p=k-1;
            int q=k+1;

            while(p>=0 || q<s.size())
            {
                if(s[p]==ch)
                {
                    ch++;
                    p--;

                }


                else if(s[q]==ch)
                {

                    ch++;
                    q++;


                }

                else
                {

                    ans=1;
                    break;

                }




            }




        }









          if(ans==0) cout<<"YES"<<endl;

            else cout<<"NO"<<endl;

    }

}
