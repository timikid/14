#include <stdio.h>
#include <stdlib.h>

struct linknode{
	int data;
	//linknode *next;
	void* next;
}; 

static struct linknode *list;   //이파일내에서만  

static struct linknode *create_node(int value){
	
	struct linknode *ptr;
	ptr = (struct linknode*)malloc(sizeof(struct linknode));
	
	if(ptr!=NULL){
	
	ptr->data = value;
	ptr->next = NULL;
}

	return ptr;
}


int insertDataTotail(int value){    //Data의 문 (인캡슐 문) 
	
	struct linknode *nodePtr;  //새로운거  
	struct linknode *srchPtr;  //찾는거  
	
	nodePtr = create_node(value);
	
	if(nodePtr==NULL){
		printf("memory allocation error\n");
		return -1;
	}
	
	
	if (list==NULL){
		list = nodePtr; //아니면 찾아서  
	} 
	
	else{
	    srchPtr = list;
		 
		while(srchPtr->next != NULL){
			srchPtr = (struct linknode*)srchPtr->next;
		}
		srchPtr->next = nodePtr; //linking
	
	}
	return 0;
	
}  


void print_list(void){
	struct linknode *ptr = list;
	int i;
	
	while(ptr != NULL){   //다음이 있ㅇ르떄   
		printf("%i\n",ptr->data);
		ptr= (struct linknode*)ptr->next;
	}
}


void print_node(int n){
	struct linknode *ptr = list;
	int i=0;
	
	while(ptr!=NULL){
		
		if (i==n)
		{
		printf("%i'th data :%i\n", i, ptr->data);
		return;
	    }
	    i++;
	    ptr = (struct linknode*)ptr->next;
	}
	
    printf("no data\n");

}

