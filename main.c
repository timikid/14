#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Book{
	int number;
	char title[20];
}; 

int main(int argc, char *argv[]) {
	int i;
	struct Book **bookshelf;
	
	bookshelf = (struct Book**)malloc(3*sizeof(struct Book*));  //1차원 포인터변수  
	
	for(i=0;i<3;i++)
	   bookshelf[i]=malloc(10*sizeof(struct Book));
	
    bookshelf[1][3].number =5;
    strcpy(bookshelf[1][3].title, "C++programming");
    
    (bookshelf[2]+4)->number =3;   //2,4에 접근  
    strcpy((bookshelf[2]+4)->title, "Cprogramming Theory");
    
    printf("Book(1,3) :%i, %s\n", (bookshelf[1]+3)->number,(bookshelf[1]+3)->title );
    printf("Book(2,4) :%i, %s\n", bookshelf[2][4].number,bookshelf[2][4].title );
    
	for(i=0;i<3;i++)
       free(bookshelf[i]);
	free(bookshelf); 
     
	
	return 0;
}
