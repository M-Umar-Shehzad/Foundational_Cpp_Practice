#include<iostream>
using namespace std;

int* max(int* x, int* y);

int main()
{
	int x,y;
	cout<<"Enter the 1st Number : ";cin>>x;
	cout<<"Enter the 2nd number : ";cin>>y;
	
	int* p = &x;
	int* q = &y;
	
	cout<<x<<" address is "<<p;
	cout<<endl<<y<<" address is "<<q;
	
	cout<<"\nAmong "<<*p<<" and "<<*q<<". The Greater value is : "<<max(p,q);
	
return 0;	
}
int* max(int* x, int* y)
{
	if(*x>*y)
	{
		return x;
	}
	else
	{
		return y;
	}
	
}