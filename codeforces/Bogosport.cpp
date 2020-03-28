#include<iostream>
using namespace std;
int main()
{
	int t,l,s,i,j;
	cin >> t;
	while(t--)
	{
		cin>>l;
		int a[l];
		for(i=0;i<l;i++)
		   cin >> a[i];
		for(i=0;i<l;i++)
		{for(j=i+1;j<l;j++)
		    {
		    	if((j-a[j])==(i-a[i]))
		    	   {
				    s=a[i];
				    a[i]=a[j];
				    a[j]=s;
				    i=-1;
				    break;
			       } 
			}
		}
		for(i=0;i<l;i++)
		   cout << a[i] <<' ';
		cout << endl;
	}
}
