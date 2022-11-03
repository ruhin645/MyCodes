#include bits/stdc++.h
using namespace std;
int main()
{
    int t,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x;
        int d,ans=0;
         d = b-a;
         ans = d/x;
        cout<<ans<<endl;
    }
}