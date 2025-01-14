

	#include<stdio.h>
	#include<stdlib.h>
	#define size 5
	int cqueue_arr[size];	
   		int front=-1;
		int rear=-1;
		void insert(int item)
	{
		if(front==0 &&(rear==size-1)||(front==(rear+1)%size))
	{
		printf("queue is full");
  		return;
	}
		else
	{
		if(front==-1)
	{
		front=0;
	}
		rear=(rear+1)%size;
		cqueue_arr[rear]=item;
		printf("%d is inserted /n",item);
	}
	}
		void deletion()
	{
		if(front==-1)
	{
		printf("Queue is empty");
		return;
	}
		else
	{
		printf("%d is deleted from queue/n",cqueue_arr[front]);
		if(front==rear)
	{
			front=-1;
			rear=-1;
	}
		else
		front=(front+1)%size;
	}
	}	
		void display()
	{
		int i;
		if(front==-1)
	{
		printf("queue is empty\n");
		return;
	}
		else
	
	{
		printf("queue element:\n");
		for(i=front;i!=rear;i=(i+1)%size)
	{
		printf("%d\t",cqueue_arr[i]);
	}
		printf("%d",cqueue_arr[i]);
	}
	}
		int main()
	{
		int choice,item;
		do
		{
		printf("\n 1. Insert\n");
		printf("\n 2. Delet\n");
		printf("\n 3.Display\n");
		printf("\n 4. Exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
	{
		case 1:
  		printf("input the element for insertion in queue:\n");
		scanf("%d",&item);
		insert(item);
		break;
		
		case 2:deletion();
		       break;
		
		case 3:display();
		       break;
		
		case 4:exit(0);
		       break;
		default:printf("wrong choice\n");
	}
	}while(choice!=4);
		return 0;
	}
		




		
		
 	
 	
