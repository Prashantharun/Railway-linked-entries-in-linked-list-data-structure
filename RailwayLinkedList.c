/* 
Project name   : Railway Linked List Entries
Developer name : Prashanth Arun
Company name   : Personal Use (Practice)
*/

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

struct Railway{

   char PersonName[30];
   int NumberOfTicketsBooked;
   int TicketNumber;
   char TrainName[30];
   int DepartureDate;
   char DestinationName[30];

   struct Railway *link;

};

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void addnode(struct Railway *head);

void display(struct Railway *head);

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
  int Start, Print, Create, Loop, disp;  

  struct Railway *head = NULL;

  head = malloc(sizeof(struct Railway));

  printf("Railway Entries\n");
 
 Jump :

  printf("Press 1 : to add the entries\n");
  scanf("%d",&Start);

if(1 == Start)
{
  printf("Enter the Person name\n");
  scanf("%s",head->PersonName);

  printf("Enter the Number of tickets\n");
  scanf("%d",&(head->NumberOfTicketsBooked));

  printf("Enter the Ticket number\n");
  scanf("%d",&(head->TicketNumber));

  printf("Enter the Train name\n");
  scanf("%s",(head->TrainName));

  printf("Enter the Departure date\n");
  scanf("%d",&(head->DepartureDate));

  printf("Enter the Destination name\n");
  scanf("%s",(head->DestinationName));

/*
  printf("Press 1 : to Print the details ELSE Press 0\n");
  scanf("%d",&Print);
*/
  head->link = NULL;
/*
  if(1 == Print)
    {
        printf("Person name : %s\n",head->PersonName);

        printf("Number of tickets : %d\n",head->NumberOfTicketsBooked);

        printf("Ticket number : %d\n",head->TicketNumber);

        printf("Train name : %s\n",head->TrainName);

        printf("Departure date : %d\n",head->DepartureDate);
 
        printf("Destination name : %s\n",head->DestinationName);

    }
*/


  printf("Press 1 : to add one more entry\n");
  scanf("%d",&Create); 
do{

  if(1 == Create)
    {
        addnode(head);
    }
 
  printf("Press 1 : to add one more entry\n");
  scanf("%d",&Loop);

}while(Loop);


 printf("Press 1 : to Print the data of entries\n");
 scanf("%d",&disp);

    if(1 == disp)
    {
        display(head);
    }
 


}
else
{
  goto Jump;
}

  
  return 0;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void addnode(struct Railway *head)
{

  // Travesing till the last node

  while(head->link != NULL)
  {
       head = head->link;
  }

  // Create a New node
  
  struct Railway *newnode;

  // Allocate memory to that node
 
  newnode = malloc(sizeof(struct Railway));

  // Add the data to that node
   
  printf("Enter the Person name\n");
  scanf("%s",newnode->PersonName);

  printf("Enter the Number of tickets\n");
  scanf("%d",&(newnode->NumberOfTicketsBooked));

  printf("Enter the Ticket number\n");
  scanf("%d",&(newnode->TicketNumber));

  printf("Enter the Train name\n");
  scanf("%s",(newnode->TrainName));

  printf("Enter the Departure date\n");
  scanf("%d",&(newnode->DepartureDate));

  printf("Enter the Destination name\n");
  scanf("%s",(newnode->DestinationName));

  // Store the address of newnode in previous node

  head->link = newnode;

  // Point the last node to NULL

  newnode->link = NULL;

}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void display(struct Railway *head)
{
  
   while(head != NULL)
      {
        // Print the data on the node

        printf("Person name : %s\n",head->PersonName);

        printf("Number of tickets : %d\n",head->NumberOfTicketsBooked);

        printf("Ticket number : %d\n",head->TicketNumber);

        printf("Train name : %s\n",head->TrainName);

        printf("Departure date : %d\n",head->DepartureDate);
 
        printf("Destination name : %s\n",head->DestinationName);
   
        // Move to the next node
     
        printf("-----------------------------------------------------------\n");

        head = head->link;
         
        }

}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------











