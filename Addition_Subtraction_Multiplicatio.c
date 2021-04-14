#include <stdio.h>

int main(){
	int m, n, e, f, z, a[20][20], b[20][20], i, j, k, sum[20][20], sub[20][20], pdt[20][20], ch;
  
	printf("NOTE :\n* For Addition or Subtraction, the two matrices must have the same order \n* For Multiplication, the number of Columns of the first matrix must be equal to the number of Rows of the second matrix\n\n");
	  
	 printf("\nEnter the no. of Rows of the first matrix : \n");
	 scanf("%d", &m);
	 printf("Enter the no. of Columns of the first matrix : \n");
	 scanf("%d", &n);
	 printf("Enter the Data Elements of the first matrix : \n");
	 for(i = 0; i < m; i++){
		 for(j = 0; j < n; j++){
			 scanf("%d", &a[i][j]);
		 }
	 }
	printf("\nFirst Matrix :");
	for(i = 0; i < m; i++){
		printf("\n");
		for(j = 0; j < n; j++){
			 printf("%d \t", a[i][j]);
		 }
	 }
	  
		  
	 printf("\n\n\nEnter the no. of Rows of the second matrix : \n");
	 scanf("%d",&e);
	 printf("Enter the no. of Columns of the second matrix : \n");
	 scanf("%d",&f);
	 printf("Enter the Data Elements of the second matrix : \n");
	 for(i = 0; i < e; i++){
		 for(j = 0; j < f; j++){
			 scanf("%d", &b[i][j]);
		 }
	 }
	 printf("\nSecond Matrix :");
	   for(i = 0; i < e; i++){
		   printf("\n");
		 for(j = 0; j < f; j++){
			 printf("%d \t", b[i][j]);
		 }
	 }
	 

	printf("\n\n\nEnter 1 for Addition\n");
	printf("Enter 2 for Multiplication\n");
	printf("Enter 3 for Subtraction\n");
	
	scanf("%d", &ch);
	
	switch(ch){
   
		case 1: /*Addition*/{
			if (m == e && n == f){
				printf("\n\nSum of the two matrices :");
				for(i = 0; i < m; i++){
					printf("\n");
					for(j = 0; j < n; j++){
						sum[i][j] = a[i][j] + b[i][j];
						printf("%d \t", sum[i][j]);
					}
				}
			}
			else{
				printf("\n\nAddition is not possible since the two matrices do not have the same order");
			}
			break;
	 	}
	
		case 2: /*Multiplication*/{
			int k;
			printf("\n\nThe resultant matrices is : \n");

			for(i = 0; i < m; i++){
				for(j = 0; j < f; j++){
					for(k = 0; k < e; k++){
					 	z += a[i][k] * b[k][j];
					}
					pdt[i][j] = z;
					printf("%d  ", pdt[i][j]);
					z = 0;
			 	}
			 	printf("\n");
		 	}
		 	break;
		} 
	
		case 3: /*Subtraction*/{
			if (m == e && n == f){
				printf("\n\nDifference of the two matrices :");
				for(i = 0; i < m; i++){
					printf("\n");
					for(j = 0; j < f; j++){
						sub[i][j] = a[i][j] - b[i][j];
						printf("%d \t", sub[i][j]);
					}
				}
			}
			else{
				printf("\nSubtraction is not possible since the two matrices do not have the same order");
			}
			break;
		}
	}

	return 0;
}
