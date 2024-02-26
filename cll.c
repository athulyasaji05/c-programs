#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node *head=NULL;
void insert(int e)
{
	struct node *t;
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(struct node));
		head->data=e;
		head->next=head;
	}
	else
	{
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=(struct node*)malloc(sizeof(struct node));
		t->next->data=e;
		t->next->next=head;
	}
}
void display()
{
	struct node *t;
	if(head==NULL)
	{
		printf("CLL is empty");
	}
	else
	{
		t=head;
		do
		{
			printf("%d\t",t->data);
			t=t->next;
		}
		while(t!=head);
	}
}
void delete(int e)
{
	struct node *t;
if(head==NULL)
	{
	  printf("Linked List is empty");
	}
else if(head->data=e&&head->next==head)
	{
	head=NULL;
	}
else if(head->data=e)
	{
	t=head;
	while(t->next!=head)
	{
		t=t->next;
	}
	t->next=head->next;
	head=head->next;
	}
else
	{
	t=head;
	while(t->next!=NULL&&t->next->data!=e)
		{
		t=t->next;
		}
		if(t->next=head)
		{
			printf("\nElement not found");
		}
		else
		{
			t->next=t->next->next;
		}
		}
	}

int menu()
{
	int ch;
	printf("\ninsert-1\ndelete-2\ndisplay-3\nexit-4\nyour choice:");
	scanf("%d",&ch);
	return ch;
}
void process()
{
	int ch,e;
	for(ch=menu();ch!=4;ch=menu())
	{
		switch(ch)
		{
			case 1:
				printf("Enter the element:");
				scanf("%d",&e);
				insert(e);
				break;
			case 2:
				printf("Enter the element:");
				scanf("%d",&e);
				delete(e);
				break;
			case 3:
				display();
				break;
		}
	}
}
int main()
{
	process();
	return 0;
}

