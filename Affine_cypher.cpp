#include<bits/stdc++.h>
using namespace std;
#define ll int
#define nl "\n"

int mul_inv(ll k)
{
    ll r1,r2,r,t1=0,t2=1,t,q,x,y,k1;
    r1=26;
    r2=k;
    x=r1;
    y=r2;

    while(r2!=0)
    {
        q=r1/r2;
        r=r1-(q*r2);
        t=t1-(q*t2);
        r1=r2;
        r2=r;

        t1=t2;
        t2=t;
    }
    if(r1==1)
    {
        if(t1<0)
        {
            k1=t1+26;
        }
        else
        {
            k1=t1%26;
        }
    }
    return k1;

}



int main()
{
    string s,sc,sp;
    ll k1,k2,kl;

    cin>>s>>k1>>k2;
    ll l;
    l=s.size();
    for(ll i=0; i<l; i++)
    {
        s[i]=tolower(s[i]);
        sc.push_back(((((((s[i]-97)%26)*(k1%26))%26)+(k2%26))%26)+97);
    }

    cout<<sc<<nl;
    kl=mul_inv(k1);
    //cout<<kl;
    for(ll i=0; i<l; i++)
    {
        sp.push_back((((((((sc[i]-97)%26)-(k2%26))+26)%26)*(kl%26))%26)+97);
    }

    cout<<sp<<nl;
}
