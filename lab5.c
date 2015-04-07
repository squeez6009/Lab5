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
create_list_no_nodes();
create_list_node();
insert_front();
insert_middle();
insert_end();
delete_front();
delete_middle();
delete_end();
traverse();
look_up_by_index();


/* Function: main()*/

struct StudentInfo
{
  char first_name[FIRSTNAME];
  char last_name[LASTNAME];
  char ID[PUID];
  char age[AGE];
  struct StudentInfo *nextaddr;
  };
  
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
    

  
  
  
