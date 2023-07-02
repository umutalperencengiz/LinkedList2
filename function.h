struct nodeClass
{
	int classID;
	double classMidtermAverage;
	struct nodeClass *next;
	struct nodeStudent *studentPtr;
};

struct nodeStudent
{
	int studentID;
	int midterm;
	struct nodeStudent *next;
};

void insert(struct nodeClass** header,int id,int midterm)
{
struct nodeClass* ptrClass = (struct nodeClass*)malloc(sizeof(struct nodeClass));
struct nodeStudent* ptrStudent = (struct nodeStudent*)malloc(sizeof(struct nodeStudent));


if(id<77000 && 66000<id)
{
	ptrClass->classID = 1;
	ptrClass->classMidtermAverage = 0;
	ptrClass->next =*header;
	*header = ptrClass;
	ptrStudent->studentID = id;
	ptrStudent->midterm = midterm;
	ptrClass->studentPtr = ptrStudent;
	
	
	ptrStudent->next = NULL;
	
}
else if(id<88000 && 77000<id)
{
	
	ptrClass->classID = 2;
	ptrClass->classMidtermAverage = 0;
	ptrClass->next = *header;
	*header = ptrClass;
	ptrStudent->studentID = id;
	ptrStudent->midterm = midterm;
	ptrClass->studentPtr = ptrStudent;
	ptrStudent->next = NULL;
	
	
}
else if(id<99000 && 88000<id)
{
	ptrClass->classID = 3;
	ptrClass->classMidtermAverage = 0;
	ptrClass->next = *header;
	*header = ptrClass;
	ptrStudent->studentID = id;
	ptrStudent->midterm = midterm;
	ptrClass->studentPtr = ptrStudent;
	ptrStudent->next = NULL;
	
	
}
else if(id<100000 && 99000<id)
{
	ptrClass->classID = 4;
	ptrClass->classMidtermAverage = 0;
	ptrClass->next= *header;
	*header = ptrClass;
	ptrStudent->studentID = id;
	ptrStudent->midterm = midterm;
	ptrClass->studentPtr = ptrStudent;
	ptrStudent->next = NULL;
	
	
}
	ptrClass = ptrClass->next;
	ptrStudent = ptrStudent->next;
	



}
void SortLinkedList(struct nodeClass* header)
{
    struct nodeClass* node=NULL, *node2 = NULL;
    int tempid,tempMidterm,tempClassId;//temp variable to store node data
    node = header;
    while(node != NULL)
    {
        node2=node; 
        while (node2 !=NULL) 
        {
		if(node2->classID == node->classID)
		{
			if(node2->studentPtr->midterm == node->studentPtr->midterm && node2->studentPtr->studentID < node->studentPtr->studentID)
			{
				tempid = node->studentPtr->studentID;
				tempMidterm = node->studentPtr->midterm;
				tempClassId = node->classID;
            	node->studentPtr->studentID= node2->studentPtr->studentID;// swap the data
				node->studentPtr->midterm = node2->studentPtr->midterm;
				node->classID = node2->classID;
				node2->studentPtr->studentID = tempid;
				node2->studentPtr->midterm = tempMidterm;
				node2->classID = tempClassId;

			}
			if(node2->studentPtr->midterm > node->studentPtr->midterm)
			{
				
				tempid = node->studentPtr->studentID;
				tempMidterm = node->studentPtr->midterm;
				tempClassId = node->classID;
            	node->studentPtr->studentID= node2->studentPtr->studentID;// swap the data
				node->studentPtr->midterm = node2->studentPtr->midterm;
				node->classID = node2->classID;
				node2->studentPtr->studentID = tempid;
				node2->studentPtr->midterm = tempMidterm;
				node2->classID = tempClassId;
				
			}
		}
			
         node2 = node2->next;     
        }
        node = node->next;    
    }
	
}
void computeClassAverage(struct nodeClass* header)
{
	struct nodeClass* ptrClass = header;
	double count1=0;
	double count2= 0;
	double count3= 0;
	double count4= 0;
	double temp1=0;
	double temp2=0;
	double temp3=0;
	double temp4=0;
	
	while(ptrClass != NULL)
	{	
		
		
		if(ptrClass->classID == 1)
		{
			count1++;
			temp1 +=	ptrClass->studentPtr->midterm;
			ptrClass->classMidtermAverage = temp1/count1;
			
		}
		else if(ptrClass->classID == 2)
		{
			count2++;
			temp2 +=	ptrClass->studentPtr->midterm;
			ptrClass->classMidtermAverage = temp2/count2;
			
		}
		else if(ptrClass->classID == 3)
		{
			count3++;
			temp3  +=	ptrClass->studentPtr->midterm;
			ptrClass->classMidtermAverage = temp3/count3;
			
		}
		else if(ptrClass->classID == 4)
		{
			count4++;
			temp4 +=	ptrClass->studentPtr->midterm;
			ptrClass->classMidtermAverage = temp4/count4;
			
		}
		ptrClass =ptrClass->next;
	}
}
void printAverage1(struct nodeClass* header)
{
struct nodeClass* ptrclass = header;
double tempAverage=0;
	while(ptrclass !=NULL)

	{
		if(ptrclass->classID ==1)
		{
			tempAverage =ptrclass->classMidtermAverage;
		}
		ptrclass = ptrclass->next;
		//printf("1 %.2lf\n",tempAverage);
	}
	
	if(tempAverage !=0) printf("1 %.2lf\n",tempAverage);
}
void printAverage2(struct nodeClass* header)
{
struct nodeClass* ptrclass = header;
double tempAverage=0;

	while(ptrclass !=NULL)

	{
		if(ptrclass->classID ==2)
		{
			tempAverage =ptrclass->classMidtermAverage;
		}
		ptrclass = ptrclass->next;
		//printf("2 %.2lf\n",tempAverage);
	}
	if(tempAverage !=0) printf("2 %.2lf\n",tempAverage);
}
void printAverage3(struct nodeClass* header)
{
struct nodeClass* ptrclass = header;
double tempAverage= 0;

	while(ptrclass !=NULL)

	{
		if(ptrclass->classID ==3)
		{
			tempAverage =ptrclass->classMidtermAverage;
		}
		ptrclass = ptrclass->next;
		//printf("3 %.2lf\n",tempAverage);
	}
	
	if(tempAverage !=0) printf("3 %.2lf\n",tempAverage);
}
void printAverage4(struct nodeClass* header)
{
struct nodeClass* ptrclass = header;
double tempAverage=0;

	while(ptrclass !=NULL)

	{
		if(ptrclass->classID ==4)
		{
			tempAverage =ptrclass->classMidtermAverage;
		}
		ptrclass = ptrclass->next;
		//printf("4 %.2lf\n",tempAverage);
	}
	
	if(tempAverage !=0) printf("4 %.2lf\n",tempAverage);
}
void printFirst(struct nodeClass* header)
{

	struct nodeClass* ptrclass = header;
	while(ptrclass !=NULL)

	{
		if(ptrclass->classID ==1)
		{
			
			printf("%d %d\n",ptrclass->studentPtr->studentID,ptrclass->studentPtr->midterm);
		}
		ptrclass = ptrclass->next;
	}
}
void printSecond(struct nodeClass* header)
{
	struct nodeClass* ptrclass = header;
	
	while(ptrclass !=NULL)

	{
		
		if(ptrclass->classID ==2)
		{

		printf("%d %d\n",ptrclass->studentPtr->studentID,ptrclass->studentPtr->midterm);
		
		}
		ptrclass = ptrclass->next;
	}
}
void printThird(struct nodeClass* header)
{
	struct nodeClass* ptrclass = header;
	while(ptrclass !=NULL)

	{
		if(ptrclass->classID ==3)
		{

		printf("%d %d\n",ptrclass->studentPtr->studentID,ptrclass->studentPtr->midterm);
		
		}
		ptrclass = ptrclass->next;
	}
}
void printFourth(struct nodeClass* header)
{
	struct nodeClass* ptrclass = header;
	while(ptrclass !=NULL)

	{
		if(ptrclass->classID ==4)
		{

		printf("%d %d\n",ptrclass->studentPtr->studentID,ptrclass->studentPtr->midterm);
		
		}
		ptrclass = ptrclass->next;
	}
}
void printAll(struct nodeClass* header)
{
	
	SortLinkedList(header);
	printAverage1(header);
	printFirst(header);
	printAverage2(header);
	printSecond(header);
	printAverage3(header);
	printThird(header);
	printAverage4(header);
	printFourth(header);
	




}

// You must write all the function definitions to be used in this lab into this file.
// You may also write other functions that may be called from our functions.
// Do not make any changes to the main.c file.
// Upload function.h file to the system as StudentNumber.h.



