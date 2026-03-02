#include<iostream>
using namespace std;

int maze (int , int , int , int);
int main()
{
	int n , m;
	int a=1, b=1;
	cout<<"Enter number of rows : ";cin>>n;
	cout<<"Enter numebr of columns : ";cin>>m;
	
	int x = maze(a,b,n,m);
	
	cout<<x;
	
return 0;
}



//========Method 1======//where i can write the er==cr and cc == ec condition in the end beacause the other conditions for this method are strict...

//int maze (int cr, int cc, int er, int ec)
//{
//	int rway=0;
//	int dway=0;
//	
//	if(cr < er && cc < ec)
//	{
//		rway+=maze(cr,cc+1,er,ec);
//		dway+=maze(cr+1,cc,er,ec);
//	}
//	
//	else if(cr == er && cc<ec)
//	{
//		rway+=maze(cr,cc+1,er,ec);
//	}
//	else if(cc == ec && cr<er)
//	{
//		dway+=maze(cr+1,cc,er,ec);
//	}
//	else if(cr == er && cc == ec)
//	{
//		return 1;
//	}
//	int total = rway + dway;
//	return total;
//}

//========Method 2====== //where i can not write the er==cr and cc == ec condition in the end beacause the other conditions for this method are strict...
/*where i can not write the er==cr and cc == ec condition in the end beacause the other conditions 
for this method are not strict and before the condition cr == er && cc == ec can catch the number where im at last point
another condition will catch it eg if a condition above is when cr == er then even though im at the last point and i have to return 1
my program will get stuck in a loop and keep on running the other condtion above the last point condition i.e. cr==er && cc == ec to return 1. 
That's why here I'll ahve to write the condition that returns 1 i.e. cr == er and cc == ec at top because each time the program starts a new function
it will check that condition first and if it were true it will return one with out checking the other conditions...*/ 


int maze (int cr, int cc, int er, int ec)
{
	int rway=0;
	int dway=0;
	
	if(cr == er && cc == ec)
	{
		return 1;
	}
	if(cr < er && cc < ec)
	{
		rway+=maze(cr,cc+1,er,ec);
		dway+=maze(cr+1,cc,er,ec);
	}
	
	else if(cr == er)
	{
		rway+=maze(cr,cc+1,er,ec);
	}
	else if(cc == ec)
	{
		dway+=maze(cr+1,cc,er,ec);
	}
	
	int total = rway + dway;
	return total;
}