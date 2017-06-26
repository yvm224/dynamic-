#include<bits/stdc++.h>
using namespace std;
long long int lcs(string s1,string s2)
{
    long long int a,b,u=-1,v=-1;
    a=s1.length();
    b=s2.length();
    vector<vector<long long int> >m(b,vector<long long int>(a,0));
    for(long long int y=0;y<a;y++)
    if(s1[y]==s2[0])
        {
            m[0][y]=1;
            u=y;
            break;
        }
    if(u!=-1)
    {
        for(long long int y=u;y<a;y++)
        m[0][y]=1;
    }
    for(long long int x=0;x<b;x++)
    if(s1[0]==s2[x])
        {
            m[x][0]=1;
            v=x;
            break;
        }
    if(v!=-1)
    {
        for(long long int x=v;x<b;x++)
        m[x][0]=1;
    }
    for(long long int x=1;x<b;x++)
    for(long long int y=1;y<a;y++)
    {
        if(s1[y]==s2[x])
        m[x][y]=m[x-1][y-1]+1;
        else
        m[x][y]=max(m[x-1][y],m[x][y-1]);
    }
    return m[b-1][a-1];
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<lcs(s1,s2);
    return 0;
}
