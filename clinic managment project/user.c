void view_patient(node * head)
{
	uint16_t id;
	printf("please enter ID: ");
	scanf("%hu",&id);
	node * temp = search_nde(head,id);
	if(temp!=NULL){
		printf("patient:-\nID : %hu\nAge :%hu\ngender : %s\nname : %s\n",temp->id,temp->age,temp->gender==1?"male\0":"female\0",temp->name);
	}else printf("ID not found!");
}

void view_reservations(reservation *r)
{
	uint16_t i;
	for(i=0;i<5;i++)
	{
		if(r[i].id!=-1)printf("from %s to %s there as a reservation to patient with ID : %hu\n",r[i].start_time,r[i].finish_time,r[i].id);
	}
}