#include<iostream>
using namespace std;

void print(int x,int y)
{
	if(x == y+1 ) return; // or you can either use the contition (x>y) then there will be no need to add a 1 with y.
	cout<<x<<endl;
	print(x+1,y);
}
int main()
{
	int x=1;
	int y;
	cout<<"Enter a Number : ";cin>>y;
	print (x,y);
	
}

// either put y+1 in condition or pass the value y+1 to the function from the main function
// which will increase the value of y by one, in this way x will be printed upto n numbers