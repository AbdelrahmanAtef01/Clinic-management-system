#include "linked_list.c"
#include "reservation.c"
#include "admin.c"
#include "user.c"

void main()
{
	reservation r_1={"2","2:30",-1,1}, r_2={"2:30","3",-1,2}, r_3={"3","3:30",-1,3}, r_4={"4","4:30",-1,4}, r_5={"4:30","a5",-1,5};
	reservation reservations[5]={r_1,r_2,r_3,r_4,r_5};
	uint16_t mode,pass=0,wrong_pass=0,auth=3;
	char name[50];
	node* head=NULL;
	node* created=NULL;
	while(auth!=2){
	printf("\nfor Admin mode press (0)\nfor user mode press (1)\nto exit press (2)\n");
	scanf("%hu",&auth);
	if(auth==0)
	{
		//login process
		while(wrong_pass<3){
		printf("please enter password :");
		scanf("%hu",&pass);
		if(pass==1234)break;
		else if(wrong_pass <3) {printf("wrong pass,please try again!\n");wrong_pass++;}
		}
		if(wrong_pass==3)break;
		mode = 6;
		while(mode !=5){
			printf("\nto add a new patient press(1)\nto edit a patient info press (2)\nto reserve a slot with the doctor press (3)\nto cancel a reservation press (4)\nto exit press (5)\n");
			scanf("%hu",&mode);
			if(mode==1)add_patient(&head,created,&name[0]);
			else if(mode ==2)edit_patient(head,&name[0]);
			else if(mode==3)reserve(&reservations[0],head);
			else if(mode==4)cancel_reservation(&reservations[0],head);
			else if(mode !=5)printf("number out of range choose a valid number\n");
		}
	}else if(auth==1)
	{
		mode = 4;
		while(mode !=3){
			printf("\nto view patient record press(1)\nto view today\'s reservations press (2)\nto exit press (3)\n");
			scanf("%hu",&mode);
			if(mode==1)view_patient(head);
			else if(mode ==2)view_reservations(&reservations[0]);
			else if(mode !=3)printf("number out of range choose a valid number\n");
		}
	}else if(auth!=2) printf("wrong choice,please try again !");
	}
}