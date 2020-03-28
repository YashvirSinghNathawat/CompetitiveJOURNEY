#include<iostream>
using namespace std;
#define rep(i,a,n)  for (int i=a;i<n;i++)
int main()
{   
	int n,m;
	cin >> n >> m;
	cout << m*n+m+n-3 << endl;
	rep(i,0,m-1) cout <<"L";
	rep(i,0,n-1) cout <<"U";
	rep(i,0,n-1)
	{
		if(i%2==0)
		  {
		    rep(j,0,m-1)
		       cout << "R";
		  }
		else 
		   {
		   	rep(j,0,m-1)
		   	   cout << "L";
		   }
		if(i!=n)
		   cout << "D";
	}
	
}  
