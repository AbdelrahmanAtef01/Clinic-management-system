#include "stdio.h"
#include "std_types.h"
#include "stdlib.h"

typedef struct Node{
	uint16_t age;
	uint16_t id;
	uint16_t gender;
	uint16_t reservation;
	char name[50];
	struct Node* next;
} node;

static sint16_t no_of_nodes=0;

node* search_nde(node* head,uint16_t key)
{
	node* temp = head;
	sint16_t i=0;
	if(no_of_nodes==1){
	if(temp ->id != key) temp = NULL;
	}else if(no_of_nodes>1){
	while(temp->id!=key&&i<(no_of_nodes-1)){
		temp = temp ->next;
		i++;
	}
	if(temp ->id != key) temp = NULL;
	}else temp = NULL;
	return temp;
}

node* create_nde(uint16_t age,uint16_t id,uint16_t gender,char *name)
{
	node* temp;
	temp = (node*)malloc(sizeof(node));
	if(temp != NULL )
	{
		for(int i=0;;i++)
		{
			if(name[i]=='\n'){(*temp).name[i]='\0';break;}
			(*temp).name[i] = name[i];
		}
		temp -> age = age;
		temp -> id = id;
		temp -> gender = gender;
		temp -> reservation = 0;
		temp -> next = NULL;
	}else{
		
	}
	return temp;
}

void append_nde(node* nde,node**h_ptr)
{
	no_of_nodes++;
	node * temp = *h_ptr;
	if(*h_ptr == NULL)
	{
		*h_ptr = nde;
	}else {
		while(temp->next !=NULL)
		{
			temp = temp ->next;
		}
		temp ->next = nde;
	}
}

void delete_nde(node** head,uint16_t key)
{
	node* temp = *head;
	node* deleted = search_nde(*head,key);
	if(deleted !=NULL){
	node* ref = deleted ->next;
	if(deleted == *head)
	{
		*head = ref;
		free(deleted);
	}
	else{
		while(temp->next!=deleted)
		{
			temp = temp ->next;
		}
		if(ref != NULL)temp -> next = ref;
		else temp ->next = NULL;
		free(deleted);
	}
	}else{
		printf("data not found");
	}
}