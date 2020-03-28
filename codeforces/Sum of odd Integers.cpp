#include<iostream>
using namespace std;
typedef long long ll;
int _;
int main()
{
	for(scanf("%d",&_);_;_--)
	{ll n,k;
	 scanf("%lld%lld",&n,&k);
	 if(n>=k*k && (n-k*k)%2==0) puts("YES");
	 else puts("NO");
	}
}
