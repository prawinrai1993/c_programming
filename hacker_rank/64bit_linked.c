#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<sys/types.h>
#include<unistd.h>
#include<time.h>

typedef struct test{

	int data;
	struct test *next;

}NODE;


NODE *insertdata(NODE *head)
{   
    static int cnt=0;

	NODE *nu,*temp=head;
       
	nu=calloc(1,sizeof(NODE));
//srand(getpid());
//usleep(100);
//	scanf("%d",&nu->data);i
//  nu->data=rand()%2;
  nu->data=1;
 cnt++;
	if(head==NULL)
	{
		head=nu;
		return head;
	}
	else
	{
		while(temp->next)
			temp=temp->next;

		temp->next=nu;

	}


	return head;

}
NODE *print(NODE *head)
{

	if(head==NULL)
	return 0;

	if(head)
	{
		print(head->next);
		printf("%d",head->data);
	}


}

unsigned long long int calculate(NODE *head)
{

NODE *temp=head;
int i=0;
unsigned long long int num=0;
while(temp)
{
if(temp->data)
{
num+=(unsigned long long int)pow(2,i++);
printf("%Lu.............\n\n",num);
}
else
i++;

temp=temp->next;
}

return num;

}


int main()
{

	NODE *head=NULL;
	int i;


	for(i=0;i<64;i++)
		head=insertdata(head);


	print(head);
	printf("\n\n");

	printf("decimal value=%Lu.............\n\n",calculate(head));
}
