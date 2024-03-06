void add_patient(node** head,node* created,char *name)
{
	uint16_t age,id,gender;
	printf("please enter ID: ");
	scanf("%hu",&id);
	node* temp =search_nde(*head,id);
	if(temp==NULL){
	printf("please enter age: ");
	scanf("%hu",&age);
	do{
	printf("please enter gender(1 for male or 0 for female): ");
	scanf("%hu",&gender);
	if(gender !=0&&gender!=1) printf("number out of range choose a valid number\n");
	}while(gender!=1&&gender !=0);
	while (getchar() != '\n');
	printf("please enter name: ");
	fgets(name, sizeof(name), stdin);
	created = create_nde(age,id,gender,name);
	//printf("%x\n",created);
	//printf("%x",*head);
	append_nde(created,head);
	}else printf("used ID!");
}

void edit_patient(node *head,char *name)
{
	uint16_t age,id,gender,choice=6;
	printf("please enter ID: ");
	scanf("%hu",&id);
	node * temp = search_nde(head,id);
	if(temp!=NULL){
		while(choice!=5){
			printf("\nto edit:\nid press (1)\nage press (2)\ngender press (3)\nname press (4)\nto finish editing press (5)");
			scanf("%hu",&choice);
			if(choice==1){
				printf("please enter new ID: ");
				scanf("%hu",&id);
				temp ->id = id;
			}else if(choice ==2){
				printf("please enter age: ");
				scanf("%hu",&age);
				temp ->age = age;
			}else if(choice==3){
				do{
				printf("please enter gender(1 for male or 0 for female): ");
				scanf("%hu",&gender);
				if(gender ==0||gender==1)temp ->gender = gender;
				else printf("number out of range choose a valid number\n");
				}while(gender!=1&&gender !=0);
			}else if(choice==4){
				while (getchar() != '\n');
				printf("please enter name: ");
				fgets(name, sizeof(name), stdin);
				for(int i=0;;i++)
				{
					if(name[i]=='\n'){(*temp).name[i]='\0';break;}
					(*temp).name[i] = name[i];
				}
			}else if(choice !=5)printf("number out of range choose a valid number\n");
		}
	}else printf("ID not found!");	
}

void reserve(reservation *r,node *head){
	uint16_t id,num;
	printf("\nAvailable slots :");
	for(int i=0;i<5;i++)
	{
		if(r[i].id==-1)printf("from %s pm to %s pm, reservation number (%hu)\n",r[i].start_time,r[i].finish_time,r[i].reservation_number);
	}
	printf("please enter ID :");
	scanf("%hu",&id);
	node * temp = search_nde(head,id);
	if(temp!=NULL){
		printf("please enter reservation number :");
	    scanf("%hu",&num);
		if(r[array_search_rn(r,num)].id==-1){
			temp ->reservation = num;
			r[array_search_rn(r,num)].id= temp ->id;
			printf("slot reserved succefully :)\n");
		}else("reservation number out of range!\n");
	}else printf("ID not found!");	
}

void cancel_reservation(reservation *r,node *head)
{
	uint16_t id,num;
	printf("please enter ID :");
	scanf("%hu",&id);
	node * temp = search_nde(head,id);
	if(temp!=NULL){
		if(temp->reservation != 0){
			r[array_search_id(r,temp->id)].id= -1;
			temp ->reservation = 0;
			printf("slot reserved succefully :)\n");
		}else("there is no reservations for this id\n");
	}else printf("ID not found!");	
}