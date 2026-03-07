#include<iostream>
using namespace std;

void incr(int* x)
{
	*x+=10;
}
int main()
{
	int x;
	cout<<"Enter a number : ";cin>>x;
	
	int* p = &x;
	incr(p);
	cout<<"After an increment by 10 the vlaue of x becomes : "<<*p;
}