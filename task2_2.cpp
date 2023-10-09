#include<bits/stdc++.h>
using namespace std;
vector<int>p_factorial(int n)
{
	int s;
	while(n>=1)
	{
		s=s*p_factorial(n-1);
	}
	return s;
}
int main()
{
	int n,t;
	cin>>n;
	t=p_factorial(n);
	cout<<t;
}
