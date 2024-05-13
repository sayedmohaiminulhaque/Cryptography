#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<char>v;
void def()
{
    char a='a';
    for(ll i=0; i<26; i++)
    {
        v.push_back(a);
        a=a+1;
    }
}
int main()
{
    def();
    ll k;
    string s,s1,s2;
    cin>>k;
    cin>>s;

    for(ll i=0; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);
        // cout<<s[i]<<"\n";
        ll x=lower_bound(v.begin(),v.end(),s[i])-v.begin();
        //cout<<x<<"\n";
        s1.push_back(v[(x+k)%26]);
    }
    cout<<s1<<"\n";

    for(ll i=0; i<s.size(); i++)
    {
        ll x=lower_bound(v.begin(),v.end(),s1[i])-v.begin();
        //cout<<x<<"\n";
        if((x-k)<0)
        {
            s2.push_back(v[((x-k)+26)%26]);
        }
        else
        {
            s2.push_back(v[(x-k)%26]);
        }
    }
    cout<<s2<<"\n";

}

