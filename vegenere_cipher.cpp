#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s,k,sc;
    cin>>s>>k;
    ll n=s.size();
    ll l=k.size();
    for(ll i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);
        sc.push_back(((((s[i]-97)%26)+((k[i%l]-97)%26))%26)+97);
    }
        cout<<sc;
}
