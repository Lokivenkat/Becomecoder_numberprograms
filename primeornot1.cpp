#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,fc=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			fc++;
		}
	}
	cout<<"Factor count:"<<fc<<endl;
	if(fc==2)
	{
		cout<<"It is prime number";
	}
	else
	{
		cout<<"Its not a prime number";
	}
}
