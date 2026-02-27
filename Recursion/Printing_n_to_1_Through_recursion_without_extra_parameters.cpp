#include<iostream>
using namespace std;

void print(int x)
{
	if(x==0) return;
	print(x-1);
	cout<<x<<endl;
}
int main()
{
	int x;
	cout<<"Enter a Number : ";cin>>x;
	print(x);
	
	
return 0;
}