#include<iostream>
using namespace std;
int maze (int , int );
int main()
{
	int m,n;
	cout<<"Enter the number of rows : ";cin>>m;
	cout<<"Enter the number of columns : ";cin>>n;
	
	int x = maze (m,n);
	cout<<x;
	
return 0;
}

int maze(int m, int n)
{
	int lway=0 , upway=0;
	
	if (m>1 && n>1)
	{
		lway+=maze(m,n-1);
		upway+=maze(m-1,n);
	}
	else if (m==1 && n>1)
	{
		lway+=maze(m,n-1);
	}
	else if (n==1 && m>1)
	{
		upway+=maze(m-1,n);
	}
	else if (m==1 && n==1)
	{
		return 1;
	}
	
	int total = lway + upway;
	return total;
}
