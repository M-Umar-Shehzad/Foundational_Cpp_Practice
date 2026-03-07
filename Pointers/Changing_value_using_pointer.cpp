#include<iostream>
using namespace std;
int main()
{
	int x = 3;
	cout<<x<<endl;
	
	
	int*p =&x;
	*p=12;
	cout<<*p;
}