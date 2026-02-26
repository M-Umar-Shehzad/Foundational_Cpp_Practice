#include<iostream>
using namespace std;
int add(int x);
int main()
{
	int x;
	cout<<"Enter a number : ";cin>>x;
	
	int a = add(x);
	cout<<"The sum of total digits in "<<x<<" is : "<<a;
}

int add(int x)
{
	if(x<=0) return 0;
	else return x%10 + add (x/10);
}