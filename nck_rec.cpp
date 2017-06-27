#include<bits/stdc++.h>
using namespace std;
typedef long long lli;
lli nck(lli n,lli k)
{
    if(n<k)
    return 0;
    if(k==1)
    return n;
    if(n==k || k==0)
    return 1;
    return (nck(n-1,k-1)+nck(n-1,k));
}
int main()
{
    lli n,k;
    cin>>n>>k;
    cout<<nck(n,k);
    return 0;
}
