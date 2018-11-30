#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int a;
FILE * fp;

char s[80];
fp==fopen("a.txt","w");
if(fp==NULL)
{
    puts("file not opened\n");
    exit(1);
}
printf("\nenter a file lines of text\n");
while(strlen(gets(s))>0)
{
    fputs(s,fp);
    fputs("\n",fp);

    clrscr();
    for(a=1;a<=2;a++)
    {
	printf("%d",a);
	sound(a=1000);
	delay(100);
    }
    nosound();
}
fclose(fp);
	return 0;
}

