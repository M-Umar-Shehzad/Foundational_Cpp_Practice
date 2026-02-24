#include<iostream>
using namespace std;

int pow(int , int );
int main()
{
	int x,y;
	cout<<"Enter base : ";cin>>x;
	cout<<"Enter Exponent : ";cin>>y;
	
	cout<<pow(x,y);
}
int pow(int x,int y)
{
	if (y==0)
	{
		return 1;
	}
	else
	{
		return x * pow(x,y-1);
	}
}