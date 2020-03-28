#include<iostream>
using namespace std;
int main()
{   int t;
	long long int a,b,count,i=2,c;
	cin >> t;
	while(t--)
	{   count=0;
	    c=1;
		cin >> a >> b;
	    count=(b-a%b)%b;
		cout<<count<<endl;
	}
}
