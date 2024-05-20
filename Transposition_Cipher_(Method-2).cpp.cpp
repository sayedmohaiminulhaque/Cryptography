#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int n=s.size(),k,t;
    cin>>k;

    if(n%k!=0)
    {
        t=((n/k)+1)-(n%k);
    }

    for(int i=0; i<t; i++)
    {
        s.push_back('z');
    }

    n=s.size();
    string s1[n/k],s2[n/k];
    vector<int>v(n/k);

    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        s1[i/(n/k)].push_back(s[i]);
    }
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<k; j++)
        {
            //swap(s1[j][i], s1[j][v[i]-1]);
            s2[j][i]=s1[j][v[i]-1];

        }
    }
cout<<endl;
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<n/k; j++)
        {
            cout<<s2[j][i];
        }
        cout<<" ";
    }
cout<<endl;

}
/*



enemyattackstonight
4
3 1 4 5 2

2 5 1 3 4

*/
