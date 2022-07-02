int main(){
	int a[50][50],i,j,row1,col1,max,min,sum,count=0,avg;
	
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
	min=a[0][0];
	max=a[0][0];

for(i=0;i<=row1-1;i++){
		for(j=0;j<=col1-1;j++){
			count++;
		sum=sum+a[i][j];
		}
	}
	
	printf("\nThe count is :%d",count);
	avg=sum/count;
	
	for(i=0;i<=row1-1;i++){
		for(j=0;j<=col1-1;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	

	for(i=0;i<=row1-1;i++){
		for(j=0;j<=col1-1;j++){
			if(min>a[i][j]){
				min=a[i][j];
			}
		}
	}
	
	printf("\nThe avg of the elements of the array is: %d",avg);
	printf("\nThe maximum value in the array is = %d",max);
	printf("\nThe maximum value in the array is = %d",min);
		
	return 0;
}
