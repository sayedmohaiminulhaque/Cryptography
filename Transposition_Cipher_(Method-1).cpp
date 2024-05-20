#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t>>s;
    string s1[t];

    int n=s.size();

    for(int i=0; i<n; i++)
    {
        s1[i%t].push_back(s[i]);
    }

    for(int i=0; i<t; i++)
    {
        cout<<s1[i];
    }

}
