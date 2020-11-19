#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
	char str1[20],str2[20];
	int i,d,e;
	clrscr();
	printf("\NEnter the plaintext ");
	gets(str1);
	d=strlen(str1);
	//e=d%4;

	for(i=0;i<d;i=i+4)
	{
		str2[i]=str1[i+1];
		str2[i+1]=str1[i+3];
		str2[i+2]=str1[i];
		str2[i+3]=str1[i+2];
	}
	str2[d]='\0';
	printf("\nPlain text entered by user is  \n");
	printf("%s",str1);
	printf("\nCipher text is \n");
	printf(str2);
	getch();


}
