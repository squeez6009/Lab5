/** main.c: Main string suite for lab4_lib.c functions
*
* Name: Scott Jean
* Email: sajean@purdue.edu
* Course: CNIT 315
* Lab batch: 4
* Lab assignment: 5
* Date: 4/2/15
*
* 
*/

/* Includes */
#include <stdio.h>
#include <stdlib.h>


#define FIRSTNAME 15
#define LASTNAME 25
#define PUID 10
#define AGE 2

/* Function Prototypes */
void create_list_no_nodes();
void create_list_node();
void insert_front();
void insert_middle();
void insert_end();
void delete_front();
void delete_middle();
void delete_end();
void traverse();
void look_up_by_index();
void display_list();

struct StudentInfo{
  char first_name[FIRSTNAME];
  char last_name[LASTNAME];
  char ID[PUID];
  char age[AGE];
  struct StudentInfo *nextaddr;
  }*start=NULL;

/* Function: main()*/

int user_choice;

  
  int main()
  {
  do {  
    printf("\n\n\nPlease Choose From the following Menu\n");
    printf("=====================================\n");
    printf("\n1) Create a list with no nodes.\n");
    printf("\n2) Create a list with a single node.\n");
    printf("\n3) Insert node at front of list.\n");
    printf("\n4) Insert node in middle of list.\n");
    printf("\n5) Insert node at end of list.\n");
    printf("\n6) Delete first node of list.\n");
    printf("\n7) Delete middle node of list.\n");
    printf("\n8) Delete node at end of list.\n");
    printf("\n9) Traverse list.\n");
    printf("\n10) Look up node by index.\n");
    printf("\n11) Exit\n\n");
    printf("Your Choice: ");
    scanf(" %d", &user_choice);       


    /*Create a list SECTION*/
    
    if(user_choice == 1) {
      printf("\nCreate a list with no nodes.\n\n");
      create_list_no_nodes();      
    }
    /*Create a list with a single node SECTION*/
    
    else if(user_choice == 2) {
      printf("\nCreate a list with a single node.\n\n");
      create_list_node();
    }    
    /*Insert node at front SECTION*/
    
    else if(user_choice == 3) {
      printf("\n\n\nInsert node at front of list.\n");
      insert_front();
    }    
    /*Insert node in middle of list SECTION*/ 
       
    else if(user_choice == 4){
    printf("\n\n\nInsert node in middle of list.\n");
    insert_middle();
    }      
    /*Insert node at end of list SECTION*/

    else if(user_choice == 5){
      printf("\n\n\nInsert node at end of list.\n");
      insert_end();
      }
    /*Delete first node of list SECTION*/

  else if(user_choice == 6){
    printf("\n\n\nDelete first node of list.\n");
    delete_front();
    }
    /*Delete middle node of list SECTION*/

    else if(user_choice == 7){
      printf("\n\n\nDelete middle node of list.\n");
      delete_middle();
      }
    /*Delete node at end of list SECTION*/

    else if(user_choice == 8){
      printf("\n\n\nDelete node at end of list.\n");
      delete_end();
      }
    /*Traverse list SECTION*/

    else if(user_choice == 9){
      printf("\n\n\nTraverse list.\n");
      traverse();
      }
    /*Look up node by index SECTION*/

    else if(user_choice == 10){
      printf("\n\n\nLook up node by index.\n");
      look_up_by_index();
       }  
         
    /*END CHOICE SECTION*/
    else if(user_choice == 11){
      printf("\nThank you for using my program!!\n\n");
      return 0;
    }
    else{
      printf("Invalid Choice");
    }
  } while (user_choice != 11); 
  
  return 0;
  }
    
void create_list_no_nodes()
{

}
  
void create_list_node()
{
struct StudentInfo *new_node, *current;
new_node = (struct StudentInfo *)malloc(sizeof(struct StudentInfo));

printf("/nEnter Student's First Name: ");
scanf("%s", &new_node->first_name);
printf("/nEnter Student's Last Name: ");
scanf("%s", &new_node->last_name);
printf("/nEnter Student's PU ID: ");
scanf("%s", &new_node->ID);
printf("/nEnter Student's Age: ");
scanf("%s", &new_node->age);
new_node->nextaddr=NULL;

if (start==NULL)
{
start = new_node;
current=new_node;
}
else
{
current->nextaddr=new_node;
current=new_node;
}
display_list(start);
}  


void display_list(struct StudentInfo *contents)
{
  while (contents !=NULL)
  {
    printf("%-30s %-20s %-10s %s \n" contents->first_name, contents->last_name, contents->ID, contents->age);
    contents = contents->nextaddr;
    }
    }  
