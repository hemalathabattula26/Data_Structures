//#include<bits/stdc++.h>
//using namespace std;
//vector<int>p_natural_numbers(int n)
//{
//	if(n>=1)
//	{
//		cout<<n<<" ";
//		p_natural_numbers(n-1);
//	}
//}
//int main()
//{
//	int n;
//	cin>>n;
//	p_natural_numbers(n);
//}



#include<bits/stdc++.h>
using namespace std;
vector<int>p_natural_numbers(int n)
{
	if(n<=10)
	{
		cout<<n<<" ";
		p_natural_numbers(n+1);
	}
}
int main()
{
	int n;
	cin>>n;
	p_natural_numbers(n);
}
