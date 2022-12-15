#include<stdio.h> 



typedef struct {
	int id ;
	int prog_degree;
	int data_degree;
	int math_degree;
	int algo_degree;
}student;

student arr[10];

//intilaize admin data
	int admin_pass=1234;

void show_grade()
{
	// show grades with id 
	int user_id,found=0;
	printf("Enter student id:");
	scanf("%d",&user_id);
	for(int i=0;i<10;i++)
	{
		if(arr[i].id==user_id)
		{
			found=1;
			printf("Student %d grades:\n",arr[i].id);
			printf("Programing:%d\tData Structure:%d\tDiscrete Math:%d\tAlgorithms:%d\n",arr[i].prog_degree,arr[i].data_degree,arr[i].math_degree,arr[i].algo_degree);
			break;
		}
	}
	if(!found)
	{
		printf("   Wrong ID!!!!!!\n");
	}
}

int check_pass()
{
	int pass;
	
	for(int i=0;i<3;i++)
	{
		printf("password:");
		scanf("%d",&pass);
		if(pass==admin_pass)
		{
			printf("Success\n");
			return 1;
		}
		else 
		{
			printf("Wrong password!!!!!!!\n");
		}
	}
	printf("  No more triers\n");
	return 0;
}

void set_grade()
{
	int user_id,found=0;
	printf("Enter student id:");
	scanf("%d",&user_id);
	for(int i=0;i<10;i++)
	{
		if(arr[i].id==user_id)
		{
			found=1;
			printf("Programing degree:");
			scanf("%d",&arr[i].prog_degree);
			printf("Data Structure degree:");
			scanf("%d",&arr[i].data_degree);
			printf("Discrete Math degree:");
			scanf("%d",&arr[i].math_degree);
			printf("Algorithms degree:");
			scanf("%d",&arr[i].algo_degree);
			break;
		}
	}
	if(!found)
	{
		printf("   Wrong ID!!!!!!\n");
	}
}

void main(void)
{
	//intilaize random values
	for(int i=0;i<10;i++)
	{
		arr[i].id=1000+i;
		arr[i].prog_degree=50+i;
		arr[i].data_degree=60+i;
		arr[i].math_degree=70+i;
		arr[i].algo_degree=80+i;
	}
	
	int choice;
	
	do 
	{
		printf("\n1-Show grades\n2-Manipulate grades\n3-Exist\n");
		printf("your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				show_grade();
				break;
			case 2:
				if(check_pass()){set_grade();}
				break;
			case 3:
				printf("Exist\n");
				break;
			default:
				printf("Not a valid choice:\n");
				break;
		}
	}while(choice!=3);
	
}







