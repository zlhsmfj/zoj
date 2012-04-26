#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct s_node s_list;
typedef s_list *link;

struct s_node
{
	char url[80];
	struct s_node *back;
	struct s_node *front;
	struct s_node *next;
};

int main()
{
	char command[10];
	char url[80];
	int T;
	link current,back,front,tmp,head;
	
	scanf("%d",&T);
	while(T--)
	{
		current=malloc(sizeof(s_list));
		strcpy(current->url,"http://www.acm.org/");
		current->front=NULL;
		current->back=NULL;
		current->next=NULL;
		head=current;
		while(scanf("%s",command))
		{
			if(command[0]=='V')
			{
				scanf("%s",url);
				tmp=current;
				if(current->next==NULL)
					current=malloc(sizeof(s_list));
				else
					current=current->next;
				strcpy(current->url,url);
				current->front=NULL;
				current->back=tmp;
				current->next=NULL;
				tmp->next=current;
				printf("%s\n",url);
			}
			else if(command[0]=='B')
			{
				back=current->back;
				if(back==NULL)
				{
					printf("Ignored\n");
					continue;
				}
				back->front=current;
				current=back;
				printf("%s\n",back->url);
			}
			else if(command[0]=='F')
			{
				front=current->front;
				if(front==NULL)
				{
					printf("Ignored\n");
					continue;
				}
				front->back=current;
				current=front;
				printf("%s\n",front->url);
			}
			else 
				break;
		}
		while(head=NULL)
		{
			tmp=head;
			head=head->next;
			free(tmp);
		}
		if(T)
			printf("\n");
	}
	return 0;		
}
