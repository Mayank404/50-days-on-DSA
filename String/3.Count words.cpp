#include <iostream>
using namespace std;


unsigned countWords(char *str)
{
	int state=0;
	unsigned wc=0;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state=0;

		else if (state==0)
		{
			state=1;
			++wc;
		}
		++str;
	}

	return wc;
}

int main(void)
{
	char str[] = "One two  three\n four\tfive ";
	cout<<"No of words : "<<countWords(str);
	return 0;
}
