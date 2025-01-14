

	#include<stdio.h>
	#include<stdlib.h>
	struct Node
	{
   		int data;
		struct Node*next;
	};
  		struct Node*top=NULL;
  		void push(int val)
	{
 		struct Node*newNode;
		newNode=(struct Node*)malloc (sizeof(struct Node));
		newNode->data=val;
		if(top==NULL)
	{
   		newNode->next=NULL;
	}
		else
	{
  			newNode->next=top;
	}
 		top=newNode;
		printf("node is inserted\n\n");
	}
		int pop()
	{
  		if(top==NULL)
	{
		printf("\n stack is empty\n");
	}
		else
	{
 		struct Node*temp=top;
			int temp_data=top->data;
			top=top->next;
			free(temp);
			return temp_data;
	}
	}
		void display()
	{
 		 if(top==NULL)
	{
		printf("\n stack is empty\n");
	}
		else
	{
		printf("\n stack is empty \n");
		struct Node*temp=top;
		while(temp->next!=NULL)
	{

		printf("%d",temp->data);
		temp=temp->next;
	}
		printf("%d\n\n",temp->data);
	}
	}
		int main()
	{
  		int choice,val;
		printf("\n implementation of stack using linked 			list\n");
		while(1)
	{
   		printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
		printf("enter your choice");
    		scanf("%d",&choice);
		switch(choice)
	{
  		case 1: {
			printf("\n enter the value to insert");
			scanf("%d",&val);
			push(val);
			break;
                        }
 		case 2:pop();
			break;

		case 3:
			display();
			break;

		case 4:exit(0);
		       break;
		default: printf("\n wrong choice\n");	
	}
	}
	}


















