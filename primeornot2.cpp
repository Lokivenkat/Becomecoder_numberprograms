#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,fc=0;
	cin>>n;
	for(i=2;i<n;i++)
	{
	 if(n%i==0)
	 {
	 	fc=1;
	 	break;
	 }
	}
	if(fc==1)
    {
	cout<<"It is not a prime number";
	}
	else
	{
		cout<<"It is a prime";
	}
}
