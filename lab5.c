/*
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
#include <string.h>


#define FIRSTNAME 15
#define LASTNAME 25
#define PUID 10
#define AGE 2

/* Function Prototypes */

//void create_list_node(*new);
void insert_front();
void insert_middle();
void insert_end();
void delete_front();
void delete_middle();
void delete_end();
void traverse();
void look_up_by_index();
void collect_data();
void display_list();

typdef struct StudentInfo{
  char first_name[FIRSTNAME];
  char last_name[LASTNAME];
  char ID[PUID];
  char age[AGE];
  struct StudentInfo *nextaddr;
  }StudentInfo;
/* Function: main()*/

int user_choice;

  
  int main()
  {
  do {  
    printf("\n\n\nPlease Choose From the following Menu\n");
    printf("=====================================\n");
    printf("\n1) Create a list with a single node.\n");
    printf("\n2) Insert node at front of list.\n");
    printf("\n3) Insert node in middle of list.\n");
    printf("\n4) Insert node at end of list.\n");
    printf("\n5) Delete first node of list.\n");
    printf("\n6) Delete middle node of list.\n");
    printf("\n7) Delete node at end of list.\n");
    printf("\n8) Traverse list.\n");
    printf("\n9) Look up node by index.\n");
    printf("\n10) Exit\n\n");
    printf("Your Choice: ");
    scanf(" %d", &user_choice);       


    /*Create a list Single Node SECTION*/
    
    
   if(user_choice == 1) {
    printf("\nCreate a list with a single node.\n\n");
    collect_data();      
    //create_list_node(*new_node);
    char show = *new_node;
    display_list(show);
    } 
    
    
       
    /*Insert node at front SECTION*/
    
    else if(user_choice == 2) {
      printf("\n\n\nInsert node at front of list.\n");
      insert_front();
    }    
    /*Insert node in middle of list SECTION*/ 
       
    else if(user_choice == 3){
    printf("\n\n\nInsert node in middle of list.\n");
    insert_middle();
    }      
    /*Insert node at end of list SECTION*/

    else if(user_choice == 4){
      printf("\n\n\nInsert node at end of list.\n");
      insert_end();
      }
    /*Delete first node of list SECTION*/

  else if(user_choice == 5){
    printf("\n\n\nDelete first node of list.\n");
    delete_front();
    }
    /*Delete middle node of list SECTION*/

    else if(user_choice == 6){
      printf("\n\n\nDelete middle node of list.\n");
      delete_middle();
      }
    /*Delete node at end of list SECTION*/

    else if(user_choice == 7){
      printf("\n\n\nDelete node at end of list.\n");
      delete_end();
      }
    /*Traverse list SECTION*/

    else if(user_choice == 8){
      printf("\n\n\nTraverse list.\n");
      traverse();
      }
    /*Look up node by index SECTION*/

    else if(user_choice == 9){
      printf("\n\n\nLook up node by index.\n");
      look_up_by_index();
       }  
         
    /*END CHOICE SECTION*/
    else if(user_choice == 10){
      printf("\nThank you for using my program!!\n\n");
      return 0;
    }
    else{
      printf("Invalid Choice");
    }
  } while (user_choice != 10); 
  
  return 0;
  }
    

  
StudentInfo *create_list_node(StudentInfo *previous)
{
struct StudentInfo *new, *current;
new = (struct StudentInfo *)malloc(sizeof(struct StudentInfo));

if (new == (struct StudentInfo *) NULL){
  printf("\nFailed to Allocate StudentInfo array\n");
  exit(1);
  }
  
/*printf("/nEnter Student's First Name: ");
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
start = new;
current = new;
}
else
{
current->nextaddr=new;
current=new;
}
display_list(start);
}  */

/* Collect User Data Function */

void collect_data(){

struct StudentInfo *start = NULL;
struct StudentInfo *newest = NULL;

    char fname[15];
    char lname[25];
    char pid[10];
    char stuage[2];
    
     
      printf("\nEnter Student's First Name: ");
      gets(fname); 
      strcpy(new_node.first_name, fname);
           
      printf("\nEnter Student's Last Name: ");
      gets(lname);
      strcpy(new_node.last_name, lname);
           
      printf("\nEnter Student's PU ID: ");
      gets(pid);
      strcpy(new_node.ID, pid);
           
      printf("\nEnter Student's Age: ");
      gets(stuage);
      strcpy(new_node.age, stuage); 
      
      return 0;
}


void display_list(struct StudentInfo *contents)
{
  while (contents !=NULL)
  {
  char fname[15];
    char lname[25];
    char pid[10];
    char stuage[2];
    
    printf("%-30s %-20s %-10s %s \n", contents->first_name, contents->last_name, contents->ID, contents->age);
    contents = contents->nextaddr;
    }
    }  
