#include<iostream>
using namespace std;
int count(int x);
int main()
{
	int x;
	cout<<"Enter a number : ";cin>>x;
	int a = count(x);
	cout<<"The Number of total digits in "<<x<<" is : "<<a;
	
return 0;
}

int count(int x)
{
	
	if(x<=0)
	{
		return 0;
	}
	
	return 1 + count(x/10);
}