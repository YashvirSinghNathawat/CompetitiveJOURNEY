#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin >> n;
	int b[n],a[n],maxi=0;
	for(i=0;i<n;i++)
	    cin >> b[i];
	a[0]=b[0];
	for(i=1;i<n;i++)
	{   maxi=max(maxi,a[i-1]);
		a[i]=b[i]+maxi;
	} 
	for(i=0;i<n;i++)
	   cout << a[i] << ' ';
	return 0;
}
