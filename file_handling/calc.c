#include<stdio.h>
#include<stdlib.h>
int valid(char *c);

int main(int argc,char **argv)
{


	if((argc<4)||(argc>4))
	{
		printf("SYNTAX ERROR: ");
		printf("<cmd> <data> <operator> <data>\n\n");
		return 0;
	}

	float a,b;
	long long int i,x,y,j,test=1,flag=0;
	char *c;
	x=atoi(argv[1]);
	y=atoi(argv[3]);
	c=argv[2];
	for(i=0;argv[1][i];i++)
	{
		if((argv[1][i]=='.'))
		{
			a=atof(argv[1]);
			b=atof(argv[3]);
			flag=1;
		}
		if(!(((argv[1][i]>='0')&&(argv[1][i]<='9'))||(argv[1][i]=='.')))
		{
			test=0;
			goto x;
		}
	}


	for(i=0;argv[3][i];i++)
	{
		if((argv[3][i]=='.'))
		{
			a=atof(argv[1]);
			b=atof(argv[3]);
			flag=1;
		}
		if(!(((argv[3][i]>='0')&&(argv[3][i]<='9'))||(argv[3][i]=='.')))
		{
			test=0;
			goto x;
		}
	}


x:


	if(valid(c)&&(test))
	{

		if (!(flag))
		{
			switch(*c)
			{
				case '+':printf("result=%Ld\n\n",x+y);
					 break;

				case '*':printf("result=%Ld\n\n",x*y);
					 break;

				case '/':printf("result=%Ld\n\n",x/y);
					 break;

				case '-':printf("result=%Ld\n\n",x-y);
					 break;

			}
		}
		else
		{
			switch(*c)
			{
				case '+':printf("result=%lf\n\n",a+b);
					 break;

				case '*':printf("result=%lf\n\n",a*b);
					 break;

				case '/':printf("result=%lf\n\n",a/b);
					 break;

				case '-':printf("result=%lf\n\n",a-b);
					 break;

			}
		}
	}
	else
	{
		printf("SYntax error: cmd <data> <operation> <data>\n\n");
		return 0;
	}

	//printf("%d\n",a+b);
}



int valid(char *c)
{
	if(((*c)!='-')&&((*c)!='/')&&((*c)!='*')&&((*c)!='+'))
		return 0;
	else
		return 1;
}
