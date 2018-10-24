#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int i,j,l,temp = a[0];
	cin>>l;
	for(i=0;i<l;i++)
	{
	for(i=0;i<4;i++)
	{
		a[i] = a[i+1];
	}
	a[i] = temp;	
	}
	
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}
