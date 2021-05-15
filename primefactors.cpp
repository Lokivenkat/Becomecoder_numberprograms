#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,temp;
  cin>>n;
  temp=n;
  for(i=2;i*i<=temp;i++)
   {
 	while(n%i==0)
 	{
 	  cout<<i<<" ";
	  n=n/i;	
	}
  }
  return 0;
}
