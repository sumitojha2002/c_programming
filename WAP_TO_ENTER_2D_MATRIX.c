//WAP to input order martix and dispaly it: 

int main(){
	int a[50][50],i,j,size,row1,col1;
	
	printf("Enter the size of the row: ");
	scanf("%d",&row1);
	
	printf("Enter the size of the col: ");
	scanf("%d",&col1);
	
	for(i=0;i<=row1-1;i++){
		for(j=0;j<=col1-1;j++){
			printf("\nEnter the values in the array a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The array is: \n");
	for(i=0;i<=row1-1;i++){
		for(j=0;j<=col1-1;j++){
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
