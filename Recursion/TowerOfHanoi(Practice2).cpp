#include<iostream>
using namespace std;
void toh(int, char, char, char);
int main()
{
	int x;
	cout<<"Enter a number : ";cin>>x;
	toh (x,'A','B','C');
	
return 0;
}

void toh (int x, char s, char h, char d)
{
	if(x==1)
	{
		cout<<s<<" to "<<d<<endl;
		return;
	}
	toh(x-1 ,s, d ,h);
	cout<<s<<" to "<<d<<endl;
	toh(x-1, h, s, d);
	return;
	
}