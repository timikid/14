#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {

    int n[5];
    printf("input 5 integers : ");
    scanf("%d %d %d %d %d", n, n+1, n+2, n+3, n+4);
    
   
    insertDataTotail(n[0]);
    insertDataTotail(n[1]);
    insertDataTotail(n[2]);
    insertDataTotail(n[3]);
    insertDataTotail(n[4]);
    
    
    
    print_list();
    print_node(2);

	return 0;
}
