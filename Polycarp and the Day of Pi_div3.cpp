#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string pi = "314159265358979323846264338327";
    string n;
    cin>>n;
    int l = n.length();
    int ans = l;
    for(int i=0;i<l;i++)
    {
        if(n[i]==pi[i])
        {
            continue;
        }
        else{
            ans = i;
            break;
        }

    }
     cout<<ans<<endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
