#include<stdio.h>
#include<string.h>
void main()
{
	char b,ch,que[500],sh[50]="Shirish please answer",ques[500];
	int k,i,j=0;
	printf("\t\t\t\tSHIRISH ANSWERS\t\t\n");
	printf("\n\nPetition: ");
	fflush(stdin);
	ch=getch( );
	putchar(sh[i]);
	if(ch=='.')
	{
		for(i=0;i<21;i++)
		{
			que[i]=getch();	
			if (asc(que[i])==8)
			{
				break;
			}
			putchar(sh[i+1]);
			j++;
			if(que[i]=='.')
			goto next;	
		}	
	}
	else
	{
		next:
		for(i=j+1;i<21;i++)
		{
			b=getch();
			putchar(b);	
		}	
	}	
	printf("\n\nEnter your question: ");
	fflush(stdin);
	gets(ques);
	
	if(j==0)
		printf("\nI dont care about that question ");
	
	else
	{
		printf("\nAnswer:  ");
		for(i=0;i<j-1;i++)
		{
			putchar(que[i]);
		}	
	}
	getch();
}
