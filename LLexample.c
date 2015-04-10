  #include<stdio.h>
	#include<stdlib.h>
	 

	/* Node Structure */
	struct node {
	    int data;
	    struct node *next;
	};
	 
	/* List Structure */
	struct list {
	    struct node *start;
	};
	 
	// Prototypes
	void InitList(struct list *sList);
  void push(struct list *sList, int data);
	void pop(struct list *sList);
	void print(struct list *sList);
	  
	 
	 
	int main(int argc, char** argv)
	{
	    int x;
	     
	    struct list MyList;
	    InitList(&MyList);
	     
	    for(x = 0; x < 100; x++) push(&MyList, x);
    print(&MyList);
	    printf("\n\n");
	    for(x = 0; x < 25; x++) pop(&MyList);
	    print(&MyList);
	    printf("\n");
	    for(x = 0; x < 80; x++) pop(&MyList);
	    print(&MyList);
	    printf("\n");
	     
	    return 0;
}
	 
	/* Initializes the list structure */
	void InitList(struct list *sList)
	{
	    sList->start = NULL;
}
	 
	/* Adds a value to the front of the list */
	void push(struct list *sList, int data)
	{
	    struct node *p;
	    p = malloc(sizeof(struct node));
	    p->data = data;
	    p->next = sList->start;
	    sList->start = p;
	}
	 
	/* Prints the list */
	void print(struct list *sList)
	{
	    struct node *p = sList->start;
	    while(p != NULL) {
	        printf("%d ", p->data);	        p = p->next;
	    }
	}
	 
	/* Removes the first value of the list */
	void pop(struct list *sList)
	{
	    if(sList->start != NULL) {
	        struct node *p = sList->start;
	        sList->start = sList->start->next;
	        free(p);
	    }
	}
