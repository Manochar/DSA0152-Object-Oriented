#include<iostream>
using namespace std;
int main()
{
	int n,rev=0;
	cout<<"enter the reverse number:";
	cin>>n;
	while(n)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	cout<<"reverse:"<<rev<<endl;
}
