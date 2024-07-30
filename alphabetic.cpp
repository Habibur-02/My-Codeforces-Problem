 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {



 int n;
        cin>>n;
        int ar[n+2][6];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=5; j++)cin>>ar[i][j];
        }

        int f=1;
        for(int j=2; j<=n; j++)
        {
            int sum=0;
            for(int k=1; k<=5; k++)
            {
                if(ar[f][k]>ar[j][k])
                    sum++;
            }
            if(sum>=3)f=j;
        }



        cout<<f;



 }
