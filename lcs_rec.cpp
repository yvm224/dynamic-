#include<bits/stdc++.h>
using namespace std;
long long int lcs(string s1,string s2,long long int m,long long int n)
{
	if(m==0)
	return n;
	if(n==0)
	return m;
	if(s1[m-1]==s2[n-1])
	return 1+lcs(s1,s2,m-1,n-1);
	else
	return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	long long int m,n;
	m=s1.length();
	n=s2.length();
	cout<<lcs(s1,s2,m,n);
	return 0;
}
