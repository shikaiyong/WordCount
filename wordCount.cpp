#include<stdio.h>
int main()
{
	printf(" ‰»Î£∫\n");
	
	char a;
	int i,count=0,word=0;
	while((a=getchar())!='\n')
	     if(a==' ')
	     {
	     	word=0;
		 }
	     else if(word==0)
	     {
	     	word=1;
	     	count++;
		 }
	printf("µ•¥  ˝£∫\n",count);
	scanf("%d,&count");
	return(0);
	     
}

