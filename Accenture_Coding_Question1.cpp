//Accenture
//String Password Check

#include <iostream>
#include <string.h>

using namespace std;

int checkpassword(char str[],int n,int min)
{
	if(n<min)
	{
		return 0;
	}
	if(str[0]>='0' && str[0]<='9')
	{
		return 0;
	}
	int i,a=0,cap=0,nu=0;
	
	for(i=0;i<n;i++)
	{
		
		if(str[i]==' '||str[i]=='+')
		{
			return 0;
		}
		
		if(str[i]>='A' && str[i]<='Z')
		{
			cap++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			nu++;
		}
		
	}
	return cap>0 && nu>0;
	
}


int main()
{
	int min;
	string s;
	getline(cin,s);
	
	int len=s.size();
	char *c = &s[0];
	cin>>min;
	
	int k=checkpassword(c,len,min);
	if(k==1)
	{
		cout<<"Valid";
	}
	else
	{
		cout<<"Not Valid";
	}
	
	
}








