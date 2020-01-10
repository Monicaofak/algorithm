//give you some integer,calculate the amass of odd numbers in them.
#include<iostream>
using namespace std;
int main()
{
	int n,a[100];
	while(cin>>n&&n)
	{
		int s=1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==1)
			s*=a[i];
	}
		cout<<s<<endl;
	}
 return 0;
}
