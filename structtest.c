#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIRSTNAME 15
#define LASTNAME 25
#define PUID 10
#define AGE 2

struct StudentInfo{
  char first_name[FIRSTNAME];
  char last_name[LASTNAME];
  char ID[PUID];
  char age[AGE];
  struct StudentInfo *nextaddr;
  };

/* Function: main()*/

int main(){

struct StudentInfo new_node;
    char fname[15];
    char lname[25];
    char pid[10];
    char stuage[2];
    
      printf("\nCreate a list with a single node.\n\n");
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
      
      printf( "\n\nFirst Name : %s\n", new_node.first_name);
      printf( "Last Name : %s\n", new_node.last_name);
      printf( "Purdue ID : %s\n", new_node.ID);
      printf( "Age: %s\n", new_node.age);
  
return 0;
}
      
      
      
      
