#include<iostream>
using namespace std;
int main()
{
	int x = 3;
	int*p = &x;
	cout<<x<<endl;
	cout<<*p<<endl;
	
	
	int*q = &x;
	*q=1;
	cout<<*q;
}