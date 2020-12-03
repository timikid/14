#include <stdio.h>
#include <stdlib.h>

struct linknode{
	int data;
	//linknode *next;
	void* next;
}; 

static struct linknode *list;   //�����ϳ�������  

static struct linknode *create_node(int value){
	
	struct linknode *ptr;
	ptr = (struct linknode*)malloc(sizeof(struct linknode));
	
	if(ptr!=NULL){
	
	ptr->data = value;
	ptr->next = NULL;
}

	return ptr;
}


int insertDataTotail(int value){    //Data�� �� (��ĸ�� ��) 
	
	struct linknode *nodePtr;  //���ο��  
	struct linknode *srchPtr;  //ã�°�  
	
	nodePtr = create_node(value);
	
	if(nodePtr==NULL){
		printf("memory allocation error\n");
		return -1;
	}
	
	
	if (list==NULL){
		list = nodePtr; //�ƴϸ� ã�Ƽ�  
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
	
	while(ptr != NULL){   //������ �֤�����   
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

