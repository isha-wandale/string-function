#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20];
printf("enter string1\n");
gets(str1);
printf("enter string2\n");
gets(str2);
strcat(str1,str2);
puts(str1);

} 

/*
output:
ccf@ccf-Precision-Tower-3431:~$ ./a.out
enter string1
sggs
enter string2
institue
sggsinstitue

*/
