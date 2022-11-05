#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long int sum1=0,sum2=0,ans=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>-1)
            {
                sum1+=a[i];
            }
            else
            {
                sum2+=a[i];
            }
        }
        ans=(abs(sum2-abs(sum1)));
        cout<<ans<<endl;

    }
}
