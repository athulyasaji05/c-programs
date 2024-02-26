#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL;
void insert(int e)
{
	struct node *t;
	if (head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=e;
		head->next=NULL;
		head->prev=NULL;
	}
	else
	{
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=(struct node *)malloc(sizeof(struct node));
		t->next->data=e;
		t->next->next=NULL;
		t->next->prev=e;
	}
}
void display()
{
	struct node *t;
	t=head;
	while(t!=NULL)
	{
		printf("%d\t",t->data);
		t=t->next;
	}
}
void delete(int e)
{
	struct node *t;
	if(head==NULL)
	{
		printf("\nCircular Linked List is Empty");
	}
	else if(head->data==e && head->next==NULL)
	{
		head=head->next;
	}
	else if(head->data==e)
	{
		head=head->next;
		head->prev=NULL;
	}
	else
	{
		t=head->next;
		while(t!=head && t->data!=e)
		{
			t=t->next;
		}
		if(t==NULL)
		{
			printf("\nElement not found\n");
		}
		else if(t->next==NULL)
		{
			t->prev->next=NULL;
		}
		else
		{
			t->prev->next=t->next;
			t->next->prev=t->prev;    
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

