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
    printf("\n6) Insert node at end of list.\n");
    printf("\n7) Insert node at end of list.\n");
    printf("\n8) Insert node at end of list.\n");
    printf("\n9) Insert node at end of list.\n");
    printf("\n10) Insert node at end of list.\n");
    printf("\n11) Exit\n\n");
    printf("Your Choice: ");
    scanf(" %d", &user_choice);       


    /*BUBBLE SORT SECTION*/
    
    if(user_choice == 1) {
      printf("\nBubble Sort\n\n");
      call_bubble_sort ();      
    }
    /*SELECTION SORT SECTION*/
    
    else if(user_choice == 2) {
      printf("\nSelection Sort\n\n");
      call_selection_sort (); 
    }    
    /*INSERTION SORT SECTION*/
    
    else if(user_choice == 3) {
      printf("\n\n\nInsertion Sort\n");
      call_insertion_sort ();
    }    
    /*LINEAR SEARCH SECTION*/ 
       
    else if(user_choice == 4){
    printf("\n\n\nLinear Search\n");
    call_linear_search ();
    }      
    /*BINARY SEARCH SECTION*/

    else if(user_choice == 5){
      printf("\n\n\nBinary Search\n");
      call_binary_search ();
      }
    /*END CHOICE SECTION*/
    else if(user_choice == 6){
      printf("\nThank you for using my program!!\n\n");
      return 0;
    }
    else{
      printf("Invalid Choice");
    }
  } while (user_choice != 6); 
  
  return 0;
  }
    

  
  
  
