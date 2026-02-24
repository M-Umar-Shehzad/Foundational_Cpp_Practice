#include<iostream>
using namespace std;

int pow(int x, int y)
{
	if (y==0) return 1;
	else return x * pow(x,y-1);
}
int main()
{
	int x,y;
	cout<<"Enter the base : ";cin>>x;
	cout<<"Enter the exponent : ";cin>>y;
	int a = pow(x,y);
	cout<<x<<" raised to the power "<<y<<" is : "<<a;
	
return 0;
}