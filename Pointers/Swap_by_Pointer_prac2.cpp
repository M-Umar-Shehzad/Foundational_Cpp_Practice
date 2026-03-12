#include<iostream>
using namespace std;

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int x,y;
	cout<<"Enter 1st number : ";cin>>x;
	cout<<"Enter 2nd number : ";cin>>y;
	int* p = &x;
	int* q = &y;
	swap(p,q);
	cout<<"\n\nThe 1st Number after swap is : "<<*p;
	cout<<"\nThe 2nd Number after swap is : "<<*q;
	
return 0;
	
}