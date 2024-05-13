#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tt "\t"
#define nl "\n"
vector<char>v;
ll k,k1;
ll r1,r2,r,t1=0,t2=1,t,q,x,y;
string s,s1,s2;

void def()
{
    char a='a';
    for(ll i=0; i<26; i++)
    {
        v.push_back(a);
        a=a+1;
    }
}


void mul_inv()
{
    def();


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

}


void encrip(string sx,ll l)
{
     s1.clear();
    for(ll i=0; i<sx.size(); i++)
    {
        sx[i]=tolower(sx[i]);
        ll x=lower_bound(v.begin(),v.end(),sx[i])-v.begin();
        s1.push_back(v[(x*l)%26]);
        cout<<v[(x*l)%26];
    }
    cout<<nl;

}






int main()
{
    def();
    cin>>k;
    cin>>s;
    mul_inv();
    encrip(s,k);
    encrip(s1,k1);


}



