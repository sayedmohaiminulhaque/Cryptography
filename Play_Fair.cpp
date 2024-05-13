#include<bits/stdc++.h>
using  namespace std;
#define ll long long
#define nl "\n"

char ss[5][5];
set<char>s;
string str,key,str1;
void value()
{
    ll cnt=0,cnt2=0;
    cin>>key>>str;
    for(ll i=0; i<key.size(); i++)
    {
        if(s.count(key[i])==0)
        {
            if(key[i]=='j' || key[i]=='i')
            {
                ss[(i-cnt)/5][(i-cnt)%5]='i';
                s.insert('i');
                s.insert('j');
                cnt2++;
            }
            else
            {
                ss[(i-cnt)/5][(i-cnt)%5]=key[i];
                s.insert(key[i]);
                cnt2++;
            }

        }
        else
        {
            cnt++;
        }
    }

    char a='a';
    cnt=0;
    for(ll i=0+cnt2; i<26+cnt2; i++)
    {
        if(s.count(a)==0)
        {
            if(a=='i')
            {
                ss[(i-cnt)/5][(i-cnt)%5]='i';
                s.insert('i');
                s.insert('j');
                a++;
            }
            else
            {
                ss[(i-cnt)/5][(i-cnt)%5]=a;
                s.insert(str[i]);
                a++;
            }

        }
        else
        {
            cnt++;
            a++;
        }
    }

}


int main()
{
    ll first,second,first2,second2;
    value();
    string str2;
    /*
     for(ll i=0; i<5; i++)
     {
         for(ll j=0; j<5; j++)
         {
             cout<<ss[i][j]<<" ";
         }
         cout<<nl;
     }

*/
    ll n=str.size();
    for(ll i=0; i<str.size();)
    {
        if(n>1)
        {
            if(str[i]==str[i+1])
            {
                str1.push_back(str[i]);
                str1.push_back('x');
                n=n-1;
                i++;
            }
            else
            {
                str1.push_back(str[i]);
                str1.push_back(str[i+1]);
                n=n-2;
                i+=2;
            }
        }
        else if(n==1)
        {
            str1.push_back(str[i]);
            str1.push_back('z');
            n=n-1;
            i++;
        }
    }

    for(ll k=0; k<str1.size(); k+=2)
    {
        for(ll i=0; i<5; i++)
        {
            for(ll j=0; j<5; j++)
            {
                if(str1[k]=='j')
                {
                    if(ss[i][j]=='i')
                    {
                        first=i;
                        second=j;
                    }
                }
                else
                {
                    if(ss[i][j]==str1[k])
                    {
                        first=i;
                        second=j;
                    }
                }
                if(str1[k+1]=='j')
                {
                    if(ss[i][j]=='i')
                    {
                        first2=i;
                        second2=j;
                    }
                }
                else
                {
                    if(ss[i][j]==str1[k+1])
                    {
                        first2=i;
                        second2=j;
                    }
                }
            }
        }
        if(first==first2)
        {
            str2.push_back(ss[first][(second+1)%5]);
            str2.push_back(ss[(first2)][(second2+1)%5]);
        }
        else if(second2==second)
        {

            str2.push_back(ss[(first+1)%5][second]);
            str2.push_back(ss[(first2+1)%5][second2]);
        }
        else
        {
            str2.push_back(ss[first][second2]);
            str2.push_back(ss[first2][second]);

        }
    }
    cout<<str2<<nl;


    return 0;
}
