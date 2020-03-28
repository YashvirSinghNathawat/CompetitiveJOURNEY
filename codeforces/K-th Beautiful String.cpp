#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin >> n;
	char str[n+2];
	for(i=0;i<n;i++)
	    str[i]='a';
	n=n+2;
	str[i]='b';
	str[i+1]='b';
	for(i=n-1;str[i]=='b'&&str[i-1]=='b';i--)
	{   cout << str<<endl;
		        j=i;
			    str[i-2]='b';
		        str[i-1]='a';
		        cout << str[i-1] <<" "<<str[i-2]<<endl;
		        while(str[i-1]!='b')
		        { cout <<"hello"<<endl;
		       	  str[j]='a';
		          str[j-1]='b';
		          j--;
		          cout << str<<endl;
		          
		        }
		      
		
	    cout << str <<endl;
	}
}
