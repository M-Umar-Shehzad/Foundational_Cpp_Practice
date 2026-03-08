#include<iostream>
using namespace std;
void incr(int* x);
void decr(int* x);
void db(int* x);
int main()
{
	int x,y,z;
	cout<<"Enter a Number : ";cin>>x;
	z=x;
	int* p=&x;
	cout<<"\n=========================\n";
	cout<<"\nPress 1 to perform Increment";
	cout<<"\nPress 2 to perform Decrement";
	cout<<"\nPress 3 to Double the Number";
	cout<<"\nThe Number You chose is : ";cin>>y;
	while(y>3 || y<1)
	{
		cout<<"Please Select a number between 1 and 3...";cin>>y;
	}
	
	if(y==1)
	{
		incr(p);
		cout<<"The value of "<<z<<" after an increment is : "<<*p;
	}
	else if(y==2)
	{
		decr(p);
		cout<<"The value of "<<z<<" after a decrement is : "<<*p;
	}
	else
	{
		db(p);
		cout<<"The double value of "<<z<<" is : "<<*p;
	}
	
	
return 0;	
}

void incr(int* x)
{
	*x+=1;
	return;
}
void decr(int* x)
{
	*x-=1;
	return;
}
void db(int* x)
{
	*x*=2;
	return;
}