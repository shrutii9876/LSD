#include<iostream>
#include<string.h>
#define max 50
using namespace std;
class Pal
{
	char a[max];
	int top;
	public:
		Pal()
		{
			top=-1;
		}
		void push(char);
		void palindrome();
};
void Pal::push(char c)
{
	top++;
	a[top]=c;
	a[top+1]='\0';
}
void Pal::palindrome()
{
	char str[max];
	int i,j;
	cout<<"\nReverse String:";
	for(i=top,j=0;i>=0;i--,j++)
	{
		str[j]=a[i];
		cout<<str[j];
	}
	str[j]='\0';
	if(strcmp(str,a)==0)
	cout<<"\nPalindrome";
	else
	cout<<"\nNot a Palindrome";
}
int main()
{
	char str[max];
	Pal p;
	int i=0;
	cout<<"\nEnter String:";
	cin.getline(str,50);
	while(str[i]!='\0')
	{
		p.push(str[i]);
		i++;
	}
	p.palindrome();
}
