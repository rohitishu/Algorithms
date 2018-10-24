#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[100],t;
	int i;
	cin>>a;
	int len=strlen(a);
	int f,l,mid;
	f=0;
	l=len-1;
	cout<<" character to be searched"<<endl;
	cin>>t;
	while(f<=l)
	{
		mid=(f+l)/2;
		if(a[mid]==t)
		{
			cout<<"cahracter is found "<<mid+1<<endl;
			break;		}
			else if(a[mid]<t)
			{
				f=mid+1;
			}
			else
			{
				l=mid-1;
			}
	}
	if(f>l)
	{
		cout<<"cahracter is not found"<<endl;
	}
}
