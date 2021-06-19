#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char word[8], w,d, w1[8],w2[8]; 
	int c,k=0,j=0,p=0,n[10],g=0,o=0,om[10],b=0,f=0;
	int l,i,m=0;
	printf("\t\t\t\t\t\t********RULES*********\n");
	printf("1) You can guess one letter at a time.\n");
	printf("2) If it is correct you can continue guessing :) and if incorrect you will see the hangman being formed :(");
	printf("\n\t\t\t\t\t\tHave Funnnn!!\n\n");
	char a[30][16]={"hello","guitar","low","harbor","fast","ink","include","dive","feel","rough","pet","wry","record","unequal","cheer","lucky","\0"};
	printf("\t\t\t\t\t\tLets Play HANGMAN!!\n\n");
	printf("Enter any number between 0 and 15: ");
	scanf("%d",&c);
	strcpy(word,a[c]);
	//puts(word); 
	l=strlen(word);
	printf("\t\t\t\t\t\tLets Begin!!!\n\n");
	printf("\t\t\t\t\t");
	for(i=0;i<l;i++)
	printf("\t_");
	while(m!=6)
	{
		printf("\nGuess the letter:");
		scanf("%c%c",&d,&w);
		printf("\n\t\t\t\t\t");
		p=0;
		for(i=0;i<l;i++)
		{
			if(w==word[i])
			{
				n[g]=i;
				g=g+1;
				p=1;
			}
		}
		for(i=0;i<g;++i)
		{
			for(j=i+1;j<g;++j)
			{
				if(n[i]>n[j])
				{
					o=n[i];
					n[i]=n[j];
					n[j]=o;
				}
			}
		}
		f=0;k=0;
		printf("\n\t\t\t\t\t\t");
		for(i=0;i<l;i++)
		{
			if(n[f]==i)
			{
				w2[k]=word[i];
				f=f+1;
			}
			else
			w2[k]='_';
			k=k+1;
		}
		for(i=0;i<l;i++)
		printf("%c\t",w2[i]);
		printf("\n");
		if(strcmp(w2,word)==0)
		{
			printf("\n\t\t\t\t\t\tTHE VICTORY IS YOURS!!");
			m=6;
		}
		    if(p!=1)
		   {
			 m=m+1;
		    if(m==1)
			{
			printf("\n\t\t\t\t\t\tSay Hello to the hangman (;)\n\n");
			printf("\t\t\t\t\t\t***\n");
			printf("\t\t\t\t\t\t***\n");
			printf("\t\t\t\t\t\t***\n");
			}
			if(m==2)
			{
				printf("\n\t\t\t\t\t\tAnd we meet again!\n\n");
				printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t\t *\n");
			}
			if(m==3)
			{
				printf("\n\t\t\t\t\t\tAnd we meet for the third time :(\n\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t\t * ****\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t\t *\n");
			}
			if(m==4)
			{
				printf("\n\t\t\t\t\t\tAnd we meet for the fourth time :(\n\n");
				printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t    **** * ****\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t\t *\n");
			}
			if(m==5)
			{
				printf("\n\t\t\t\t\t\tAnd we meet for the fifth time :(\n\n");
				printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t    **** * ****\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t\t  *\n\t\t\t\t\t\t   *\n\t\t\t\t\t\t    *\n");
			}
			if(m==6)
			{
				printf("\n\t\t\t\t\t\tSay hello to your HANGMAN :(\n\n");
				printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t***\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t    **** * ****\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t\t *\n");
			    printf("\t\t\t\t\t\t*  *\n\t\t\t\t\t\t*   *\n\t\t\t\t\t\t*    *\n");
			    printf("\n\t\t\t\t\t\tBETTER LUCK NEXT TIME!!");
            	printf("\n\t\t\t\t\t\tThe word was ");
            	puts(word);
			}
		}
		
	}
}
