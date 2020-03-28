#include<iostream>
using namespace std;
int main()
{
	int tc,i,n,m;
	cin >> tc;
	while(tc--)
	{   cin >> n >> m;
	    if(max(m,n)%min(m,n)==0)
		   cout << "YES";
		else
		   cout << "NO"; 
		cout << "\n"; 
    }
    return 0;
}
