#include<iostream>
using namespace std;
int main()
{
	int n,temp,rev=0;
	cout<<"enter the palindrome number:";
	cin>>n;
	temp=n;
	while(temp)
	{
		rev=rev*10+temp%10;
		temp/=10;
	}
	if(rev==n)
	cout<<"is a palindrome:"<<n<<endl;
	else
	cout<<"is not a palindrome:"<<n<< endl;
}
