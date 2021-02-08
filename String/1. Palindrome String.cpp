#include<iostream>
#include<string.h>
using namespace std;

void isPalindrome(char str[])
{
	int l = 0;
	int h = strlen(str) - 1;

	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			cout<<str<<"is not Palindrome."<<endl;
			return;
		}
	}
	cout<<str<<" is Palindrome."<<endl;
}

int main()
{
  char str[20];
	cout<<"Enter a String to check if it is Palindrome."<<endl;
	cin>>str;
	isPalindrome(str);
	return 0;
}
