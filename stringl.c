#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
int j;
printf("enter string\n");
gets(str);
j=strlen(str);
printf("%d is length" ,j);
}



/*
output:
ccf@ccf-Precision-Tower-3431:~$ ./a.out
enter string
sggs
4 is length

/*
