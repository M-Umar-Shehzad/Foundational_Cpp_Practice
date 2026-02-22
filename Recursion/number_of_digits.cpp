#include<iostream>
using namespace std;
int count(int x, int y);
int main()
{
	int x,y=0;
	cout<<"Enter a number : ";cin>>x;
	int a = count(x,y);
	cout<<"The Number of total digits in "<<x<<" is : "<<a;
	
return 0;
}

int count(int x, int y)
{
	y++;
	if(x<=0)
	{
		y--;
		return y;
	}
	x/=10;
	int a=count(x,y);
	
	return a;
}