#include<iostream>
using namespace std;

int st(int);
int main()
{
	int x,a;
	cout<<"Enter a number : ";cin>>x;
	
	a=st(x);
	cout<<a;
}
int st(int x)
{
	if (x==0) return 1 ; 
	else if (x==1) return 1;
	else if (x<0) return 0;

	else return st(x-1)+st(x-2)+st(x-3);
}