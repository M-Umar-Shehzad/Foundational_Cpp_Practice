#include<iostream>
using namespace std;
void PreInPost(int n);
int main()
{
	int n;
	cout<<"Enter a number : "; cin>>n;
	PreInPost(n);
	
return 0;
}
void PreInPost(int n)
{
	if (n==0) return;
	
	cout<<"Pre "<<n<<endl;
	PreInPost(n-1);
	cout<<"In "<<n<<endl;
	PreInPost(n-1);
	cout<<"Post "<<n<<endl;
	return;
}