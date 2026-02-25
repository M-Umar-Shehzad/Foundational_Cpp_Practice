#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int x = 2;
	int a = 1;
	for (int i=1; i<=n ; i++)
	{
		a*=x;
	}
	cout<<a-1;
}