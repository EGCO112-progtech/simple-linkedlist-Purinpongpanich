//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,*head ;
/*
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;
  
  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 
    struct node d;
    b.next = &d;
    d.next = NULL;
    d.value=head->value+6;
  */
  
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)0
        
*/
/*
    struct node z;
    z.value = 2;
    z.next = &a;
    head = &z;
  
     */
        
    /*  Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
        }
  
    int i,n=4;
    for(i=0;i<n;i++){
      printf("%3d", tmp->value);
      tmp=tmp->next; 
    }
    */
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)
       
         while(){
            printf("%3d", tmp->value);
           // What is missing???
        }
    */
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
     */
    
    typedef struct node Node;
    typedef Node* temp;
  
    temp p = (temp)malloc(sizeof(Node));
    head = p;
    int z=5;
    p->value = c;
    for(int i=0 ; i<z;i++){
      p->next= (temp)malloc(sizeof(Node));
      p->next->value = p->value +3;
      p = p->next;
    }
  
    typedef struct node* NodePtr;
    NodePtr tmp=head;
  
    while(tmp != NULL){
      printf("%3d", tmp->value);
      tmp=tmp->next;
      }
    
    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
    while(tmp != NULL){
      tmp = head;
      head = head->next;
      free(tmp);
      }
    
    return 0;
}
