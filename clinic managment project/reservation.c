typedef struct {
	char start_time[10];
	char finish_time[10];
	sint16_t id;
	uint16_t reservation_number;
} reservation;

int array_search_rn(reservation *r,uint16_t reservation_number)
{
	int i;
	for(i=0;;i++)
	{
		if(r[i].reservation_number==reservation_number)break;
	}
	return i;
}

int array_search_id(reservation *r,uint16_t id)
{
	int i;
	for(i=0;;i++)
	{
		if(r[i].id==id)break;
	}
	return i;
}