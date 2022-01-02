/* 
@Author : Satyam Kumar Jha
Date : 17.12.2021
Department Of Computer Science Enginnering
Techno International Batanagar
Roll Number : 33200121140
Subject : Data Structure And Algorithm
Program : Singly Linked List (Create,Insertion,Deletion,Display,Sort,Reverse,Count)
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start = NULL;
struct node *temp;
struct node *createll(struct node*);
struct node *display(struct node*);
struct node *insert_beg(struct node*);
struct node *insert_end(struct node*);
struct node *insert_after(struct node*);
struct node *insert_before(struct node*);
struct node *sort_linkList(struct node*);
struct node *reverse_linkList(struct node*);
struct node *delete_beg(struct node*);
struct node *delete_end(struct node*);
struct node *delete_after(struct node*);
struct node *delete_before(struct node*);
struct node *delete_specific(struct node*);
struct node *delete_allNode(struct node*);
int info,val,value,flag=0 ;
int main()
{
	int choice;
	do
	{
		system("cls");
		printf("\n");
		printf("\n+-----------------------------------------+\n|     Singly Linked List Application      |\n+-----------------------------------------+\n| 1. Create Linked List                   |\n| 2. Insert Node At Beginning             |\n| 3. Insert Node At End                   |\n| 4. Insert Node After Specified Node     |\n| 5. Insert Node Before A Specified Node  |\n| 6. Sort Liked List                      |\n| 7. Reverse Linked List                  |\n| 8. Delete Node At The Beginning         |\n| 9. Delete Node At The End               |\n| 10.Delete Node After A Specified Node   |\n| 11.Delete Node Before A Specified Node  |\n| 12.Delete Specific Node                 |\n| 13.Delete Linked List                   |\n| 14.Exit.                                |\n+-----------------------------------------+\n\n");
		printf("Enter Your Choice (1-14): ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				system("cls");
				if(start!=NULL)
				{
					printf("Dear User, You Have Already Created A Linked List.\n");
					printf("\nHere Is The Linked List You Have Created : ");
				    display(start);
				    
				}
				else{
				start=createll(start);
				printf("\nLinked List Created.\n");
				printf("\nThe status of the Linked List is : ");
				display(start);
			
			}
				printf("Press Any Key To Continue.....\n");
				getch();
				break;
				
			case 2:
				system("cls");
				if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
					start=insert_beg(start);
					printf("\nThe status of the Linked List is : ");
				display(start);
				}
				printf("Press Any Key To Continue......");
				getch();
				break;
				
			case 3:
				system("cls");
				if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
					start=insert_end(start);
					printf("\nThe status of the Linked List is : ");
				display(start);
				}
				printf("Press Any Key To Continue......");
				getch();
				break;
			
		    case 4:
		          system("cls");
		          if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
		    	printf("Enter the data : ");
             	scanf("%d",&info);
				printf("Enter the value of the node after which the value is to be inserted : ");
				scanf("%d",&val);
		      	temp=start;
		      	   flag=0;
					while(temp!=NULL)
				    {
							if(temp->data==val)
							flag=1;
							temp=temp->next;
	                } 
					if(flag==1)
                 	{
     						  start=insert_after(start);
					}
   			        else
		            {
          					printf("Node Value %d not found.\n",val);

                    }
					printf("\nThe status of the Linked List is : ");
					display(start);
				}
				    printf("Press Any Key To Continue......");
					getch();
					break;
						
			case 5:
				system("cls");
				if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
				printf("Enter the data : ");
             	scanf("%d",&info);
				printf("Enter the value of the node before which the value is to be inserted : ");
				scanf("%d",&val);
				temp=start;
				flag=0;
				do
				{
					if(temp->data==val)
					flag=1;
					temp=temp->next;
		
				}while(temp!=NULL);
				if(flag==1)
				{
						 
    					   start=insert_before(start);

				}
   		     	else
		 		{
          					printf("Node Value %d not found.\n",val);

          		}
				printf("\nThe status of the Linked List is : ");
				display(start);
			}
			    printf("Press Any Key To Continue......");
				getch();
				break;
			case 6:
				system("cls");
				if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
				    printf("\nCreated Linked List Was  : ");
				    display(start);
					start=sort_linkList(start);
					printf("\nSorted Linked List is : ");
				    display(start);
				     
				}
				    printf("Press Any Key To Continue......");
				    getch();
			     	break;
				
			case 7:
				system("cls");
				if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
				    printf("\nCreated Linked List Was  : ");
				    display(start);
					 start=reverse_linkList(start);
					 printf("\nLinked List Reversed Successfully...\n");
					 printf("\nThe Status Of The Linked List Is  : ");
				    display(start);
				}
				    printf("Press Any Key To Continue......");
			       getch();
			     	 break;
			case 8:
				 system("cls");
				 if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
				start = delete_beg(start);
				printf("\nThe status of the Linked List is : ");
				display(start);
		    	}
			    printf("Press Any Key To Continue......");
				getch();
				break;
			case 9:
				system("cls");
				if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
				start = delete_end(start);
				printf("\nThe status of the Linked List is : ");
				display(start);
			   }
			    printf("Press Any Key To Continue......");
				  getch();
				break;
			case 10:
					 system("cls");
					 if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
					printf("Enter the value of the node after which the value is to be deleted : ");
					scanf("%d",&val);
		      		temp=start;
		      	    flag=0;
					while(temp!=NULL)

				    {
							if(temp->data==val)
							flag=1;
							temp=temp->next;
	                } 
					if(flag==1)
                 	{
						 
     						  start=delete_after(start);

					}
   			        else
		            {
          					printf("Node Value %d not found.\n",val);

                    }
					printf("\nThe status of the Linked List is : ");
					display(start);
				}
				    printf("Press Any Key To Continue......");
					getch();
					break;
			case 11:
					 system("cls");
					 if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
					printf("Enter the value of the node before which the value is to be deleted: ");
             		scanf("%d",&value);
		      		temp=start;
		      	    flag=0;
					while(temp!=NULL)
				    {
							if(temp->data==value)
							flag=1;
							temp=temp->next;
	                } 
					if(flag==1)
                 	{
						 
     						  start=delete_before(start);

					}
   			        else
		            {
          					printf("Node Value %d not found.\n",value);

                    }
				printf("\nThe status of the Linked List is : ");
				display(start);
			}
			    printf("Press Any Key To Continue......");
				getch();
				break;
			case 12:
				  system("cls");
		          if(start==NULL)
				{
					printf("Operation Failed  : Linked List Not Created.\n");
				}
				else
				{
				printf("Enter the value of the node to be deleted : ");
				scanf("%d",&val);
		      	temp=start;
		      	   flag=0;
					while(temp!=NULL)
				    {
							if(temp->data==val)
							flag=1;
							temp=temp->next;
	                } 
					if(flag==1)
                 	{
     						  start=delete_specific(start);
					   }
   			        else
		            {
          					printf("Node Value %d not found.\n",val);

                  }
					printf("\nThe status of the Linked List is : ");
					display(start);
				}
				    printf("Press Any Key To Continue......");
					getch();
					break;
			case 13:
					system("cls");
					if(start==NULL)
					{
						printf("Operation Failed  : Linked List Not Created.\n");
					}
					else
					{
					start=delete_allNode(start);
					printf("\nYour Linked List Is Now  ");
					display(start);
				}
					printf("Press Any Key To Continue......");
					getch();
					break;			  
		}
	}while(choice!=14);
	printf("Press Any Key To Exit The Application.....");
	getch();
	return 0;
}
struct node *createll(struct node *start)
{
	struct node *new_node,*ptr;
	int ele;
	printf("Enter -1 to End.\n");
	printf("Enter the data : ");
	scanf("%d",&ele);
	while(ele!=-1)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=ele;
		if(start==NULL)
		{
			new_node->next=NULL;
			start=new_node;
		}
		else
		{
			ptr=start;
			
			while(ptr->next!=NULL)
			
				ptr=ptr->next;
				ptr->next=new_node;
				new_node->next=NULL;
			
		
		}
			printf("Enter the data : ");
			scanf("%d",&ele);
	}
	return start;
}

  struct node *display(struct node *start)
{
	int count=0;
	struct node *ptr;
	if(start==NULL)
	{
		printf("NULL.\n");
	}
	else
	{
	ptr=start;
	do
	
	{
		printf("\t%d-->",ptr->data);
		ptr=ptr->next;
		count++;
	}while(ptr!=NULL);
	printf("NULL\n");
	printf("Node Count : %d\n\n",count);
	return start;
}
}

struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int info;
	printf("Enter The data : ");
	scanf("%d",&info);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=info;
	new_node->next=start;
	start=new_node;
   printf("%d successfully inserted at the beginning of the linked list \n",info);
	return start;

}
struct node *insert_end(struct node *start)
{
	struct node *new_node,*ptr;
	int info;
	printf("Enter the data : ");
	scanf("%d",&info);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=info;
	new_node->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
		ptr=ptr->next;
		ptr->next=new_node;
	return start;
}
struct node *insert_after(struct node *start)
{
    struct node *new_node,*ptr,*prev;
     
  new_node=(struct node *)malloc(sizeof(struct node));
  new_node->data=info;
  ptr=start;
  prev=ptr;
 do
  {
  	prev=ptr;
  	ptr=ptr->next;
  } while(prev->data!=val);
  prev->next=new_node;
  new_node->next=ptr;
  return start; 
}

struct node *insert_before(struct node *start)
{
	struct node *new_node,*ptr,*prev;
	        new_node=(struct node *)malloc(sizeof(struct node));
	        new_node->data=info;
		ptr=start;
		
 	if(ptr->data==val)
	{
		 
			 new_node->next=start;
         	 start=new_node;

	}                              
 	else
 	{
	do
	{
	prev=ptr;
		ptr=ptr->next;
	}while(ptr->data!=val);
	prev->next=new_node;
	new_node->next=ptr;

 }
	return start;
}

struct node *delete_after(struct node *start)
{
	struct node *ptr,*prev;
	ptr=start;
	prev=ptr;
	do
	{
		prev=ptr;
	 
 	ptr=ptr->next;
 	
	}while( prev->data!=val);
	if(prev->next==NULL)
	{
		printf("This operation cannot be performed,as their is no node after %d.\n",prev->data);
	}
	else
	{
		prev->next=ptr->next;
		free(ptr);
	}	
	return start;	
}

struct node *delete_before(struct node *start)
{
	struct node  *ptr,*prev,*temp;
	ptr=start;
	if(value==start->data)
	{
		printf("Node cannot be deleted.\n");
	}
	else
	{
		if(value==start->next->data)
		{
			temp=start;
			start=start->next;
			free(temp);
		}
		else
		{
			while(ptr->next->next->data!=value && ptr->next->next!=NULL )
			{
				ptr=ptr->next;
			}
			if(ptr->next->next->data==value)
			{
				prev=ptr->next;
				ptr->next=ptr->next->next;
				free(prev);
			}
		}
	}
    return start;
}

struct node *delete_beg(struct node *start)
{
	struct node *ptr;
	ptr=start;
	start=start->next;
	free(ptr);
	return start;
}

struct node *delete_end(struct node *start)
{
	struct node *ptr,*prev;
	ptr=start;
	while(ptr->next!=NULL)
	{
		prev=ptr;
		ptr=ptr->next;
	}
	prev->next=NULL;
	free(ptr);
	return start;
}

struct node *delete_specific(struct node *start)
{
	struct node *ptr,*prev;
	ptr=start;
	if(ptr->data==val)
	{
		start=delete_beg(start);
		return start;
	}
	else
	{
		while(ptr->data!=val)
		{
			prev=ptr;
			ptr=ptr->next;
		}
		prev->next=ptr->next;
		free(ptr);
		return start;
	}
}

struct node *delete_allNode(struct node *start)
{
		struct node *ptr;
		if(start!=NULL)
		{
			ptr=start;
			while(ptr!=NULL)
			{
				printf("Node With Value %d Deleted Succesfully.\n",ptr->data);
				start=delete_beg(ptr);
				ptr=start;
			}
		}
		return start;
}

struct node *sort_linkList(struct node *start)
{
	struct node *pointer1,*pointer2;
	int temp;
	pointer1=start;
	while(pointer1->next!=NULL)
	{
		pointer2=pointer1->next;
		while(pointer2!=NULL)
		{
			
			if(pointer1->data > pointer2->data)
			{
				temp=pointer1->data;
				pointer1->data=pointer2->data;
				pointer2->data=temp;
			}
			pointer2=pointer2->next;
		}
		pointer1=pointer1->next;
		 
	}
	
	return start;
}

struct node *reverse_linkList(struct node *start)
{
	struct node *prev,*ptr;
	if(start!=NULL)
	{
		prev=start;
		ptr=start->next;
		start=start->next;
		prev->next=NULL;
		while(start!=NULL)
		{
			start=start->next;
			ptr->next=prev;
			prev=ptr;
			ptr=start;
			 
		}
		start=prev;
	}
	return start;
 
}