#include<iostream>
using namespace std;

int st(int);
int main()
{
	int x,a;
	cout<<"Enter a number : ";cin>>x;
	
	a=st(x);
	cout<<a;
}
int st(int x)
{
	if (x==1) return 1 ;  // I can also do x==0 but then i'll have to return 1. think of it as paths that are divided let say the last past leads to 0 then i'll have to return 1 because even though i am at the top of the stairs at the time n become zero still there was a path that lead to zero so for the last number eventhough when its zero still a path lead to that point and i'll have to count that path (in this question we are calculating the numebr of ways we can reach n (no of paths) ).
	else if (x==2) return 2;
	else if (x==3) return 3;

	else return st(x-1)+st(x-2)+st(x-3);
}