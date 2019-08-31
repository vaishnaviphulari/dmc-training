// Name - Vaishnavi Mali
//Course - DMC

#include <stdio.h>
int main(void)
{
	int i;
	printf("enter no");
	scanf("%d",&i);
	int n=i/10;
	printf("%d\n",n);
	int m=i%10;
	printf("%d\n",m);
	int l=i/100;
	printf("%d\n",l);

	switch(n)
	{
	case 1:printf("X");break;
	case 2:printf("XX");break;
	case 3:printf("XXX");break;
	case 4:printf("XL");break;
	case 5:printf("L");break;
	case 6:printf("LX");break;
	case 7:printf("LXX");break;
	case 8:printf("LXXX");break;
	case 9:printf("X");break;
	default:break;
	}

	switch(m)
	{
	case 1:printf("I");break;
	case 2:printf("II");break;
	case 3:printf("III");break;
	case 4:printf("IV");break;
	case 5:printf("V");break;
	case 6:printf("VI");break;
	case 7:printf("VII");break;
	case 8:printf("VIII");break;
	case 9:printf("IX");break;
	default:break;
	}
    switch(l)
	{
	case 1:printf("c");break;
	default:break;
	}
	return 0;
}

