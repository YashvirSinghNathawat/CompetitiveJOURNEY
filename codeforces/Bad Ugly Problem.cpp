#include<iostream>
using namespace std;
int main()
{
	int tc,i,j;
	cin >> tc;
	int n[tc];
	for(i=0;i<tc;i++)
	   cin >> n[i];
	
	for(i=0;i<tc;i++)
	{   
	    j=n[i];
	    int temp[j];
	    temp[0]=2;
	    if (n[i]==1 || n[i]==0)
	        cout << -1 << endl;
	    else
	    {    
			for(j=1;j<n[i];j++)
		       temp[j]=3;
		    for(j=0;j<n[i];j++)
		       cout << temp[j];
		    cout << endl;
		}
	}
	cout << endl ;
	return 0;
}
