#include<bits/stdc++.h>
using namespace std;
long long int lnss(string s)
{
    long long int a=s.length(),prev=0,now=0;
    set<char> b;
    for(long long x=0;x<a;x++)
    {
        if(b.find(s[x])==b.end())
        {
            b.insert(s[x]);
            now++;
        }
        else
        {
            b.clear();
            if(prev<now)
            prev=now;
            now=1;
            b.insert(s[x]);
        }
    }
    return prev;
}
int main()
{
    string s;
    cin>>s;
    cout<<lnss(s);
    return 0;
}
