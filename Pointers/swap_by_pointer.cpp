#include<iostream>
using namespace std;


void swap(int& x, int& y)
{
	int temp = x;
	x=y;
	y=temp;
}

int main()
{
	int x,y;
	cout<<"Enter 1st Number : ";cin>>x;
	cout<<"Enter 2nd Number : ";cin>>y;
	
	cout<<"\n======================\n";
	cout<<"1st Value = "<<x;
	cout<<"\n2nd Value = "<<y;
	
	cout<<"\n======================\n";
	int* p=&x;
	int* q=&y;
	
	swap(*p,*q);
	
	cout<<"1st Value after swap is : "<<*p<<endl;
	cout<<"2nd Value after swap is : "<<*q;
	
return 0;
}