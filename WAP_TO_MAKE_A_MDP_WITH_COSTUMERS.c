#include <stdio.h>


struct Costumer
{
	char name[50];
	char address[50];
	int accnumber;
	int balance;
};

int main(){
	struct Costumer c[50];
	int size,i,ca,num;
	printf("Enter number of Costumers: ");
	scanf("%d",&size);
	
	for(i=0;i<=size-1;i++)
	{
		printf("\nEnter name of the costumer : %d\n",i+1);
		printf("\nEnter Name: ");
		scanf("%s",c[i].name);
		printf("\nEnter address: ");
		scanf("%s",c[i].address);
		printf("\nEnter acc number: ");
		scanf("%d",&c[i].accnumber);
		printf("\nEnter balance: ");
		scanf("%d",&c[i].balance);
	}
	
	while(1)
	{
		printf("\t***Enter the option***\t\n1.Display all record\n2.Display info bal>50000\n3.Input an acc number from the user and display that perticular accnumber use swtich case.\n4.Exit");
     scanf("%d",&ca);											

	switch(ca){
		case 1:
			for(i=0;i<=size-1;i++)
			{
			printf("\n Name = %s\n Address = %s\n Acc number= %d\n Balance = %d\n",c[i].name,c[i].address,c[i].accnumber,c[i].balance);
		}
			
	        break;
	    case 2:
	    	for(i=0;i<=size-1;i++)
			{
					if((c[i].balance)>=50000)
					{
						printf("\n Name = %s\n Address = %s\n Acc number= %d\n Balance = %d\n",c[i].name,c[i].address,c[i].accnumber,c[i].balance);
					}
			}
			break;
		case 3:
			printf("\nEnter a acc number: ");
			scanf("%d",&num);
		    for(i=0;i<=size-1;i++)
			{
				if((c[i].accnumber)==num)
				{
					printf("\n Name = %s\n Address = %s\n Acc number= %d\n Balance = %d\n",c[i].name,c[i].address,c[i].accnumber,c[i].balance);	
				}
			}
			break;
		case 4:
		printf("\t***THANK-YOU***\n");
		return 0;
		break;
		
	    default:
	    	printf("INVALID INPUT");
			} 
			}
			return 0;       

}
