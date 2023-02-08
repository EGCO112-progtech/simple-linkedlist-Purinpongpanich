#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,*head ;
    typedef struct node Node;
    typedef Node* temp;

  //create node
    temp p = (temp)malloc(sizeof(Node));
    head = p;
    int z=4;
    p->value = c;
    for(int i=0 ; i<z;i++){
      p->next= (temp)malloc(sizeof(Node));
      p->next->value = p->value +3;
      p = p->next;
    }
  
  //print all node
    typedef struct node* NodePtr;
    NodePtr tmp=head;
  
    while(tmp != NULL){
      printf("%3d ->", tmp->value);
      tmp=tmp->next;
      }
    printf(" NULL");

  //free all node
    p = head;
    while(p != NULL){
      tmp = p;
      printf("\ndeclaring %d",tmp->value);
      p = p->next;
      free(tmp);
      }
  
    return 0;
}
