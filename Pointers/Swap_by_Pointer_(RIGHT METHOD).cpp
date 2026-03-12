#include<iostream>
using namespace std;
void swap (int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
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
	
	swap(&x,&y);
	
	cout<<"1st Value after swap is : "<<x<<endl;
	cout<<"2nd Value after swap is : "<<y;
	
return 0;
}