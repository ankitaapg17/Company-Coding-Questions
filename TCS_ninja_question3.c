//3.WAP to replace all vowels with #.
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int i;
	printf("Enter the string:");
	scanf("%[^\n]s", a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			a[i]='#';
		}
		
		
	}
	printf("%s",a);
	
	
	
	
}
