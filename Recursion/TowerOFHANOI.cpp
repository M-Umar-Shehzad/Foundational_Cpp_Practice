#include<iostream>
using namespace std;
void tower (int,char,char,char);
int main()
{
	int n;
	cout<<"Enter a number : ";cin>>n;
	tower(n,'A','B','C');
	
return 0;
}


void tower (int n,char s, char h, char d)
{
	if (n==1)
	{
	cout<<s<<" to "<<d<<endl;
	return;
	}
	
	tower(n-1,s,d,h);
	cout<<s<<" to "<< d<<endl;
	tower(n-1,h,s,d);
	
return;
}