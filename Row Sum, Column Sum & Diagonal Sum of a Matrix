#include <stdio.h>  
   
int main(){  
	int rows, cols, sumRow, sumCol, sumDia; 
	
	printf("Enter the number of Rows and Columns of the Matrix :\n");
	scanf("%d %d", &rows, &cols);
	int a[rows][cols],i,j;
	
	printf("Enter the Elements of the Matrix :\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nInput Matrix:");
	for(i=0;i<rows;i++){
		printf("\n");
		for(j=0;j<cols;j++){
			printf("%d \t",a[i][j]);
		}
	}
	printf("\n\n");
	  
	//Calculates sum of each row of the given matrix  
	for(int i = 0; i < rows; i++){  
		sumRow = 0;  
		for(int j = 0; j < cols; j++){  
		  sumRow = sumRow + a[i][j];  
		}  
		printf("Sum of Row %d : %d\n", (i+1), sumRow);  
	}  
	  
	printf("\n");
	
	//Calculates sum of each column of the given matrix  
	for(int i = 0; i < cols; i++){  
		sumCol = 0;  
		for(int j = 0; j < rows; j++){  
		  sumCol = sumCol + a[j][i];  
		}  
		printf("Sum of Column %d : %d\n", (i+1), sumCol);  
	}  
	
	printf("\n");
	
	//Calculates sum of the diagonal of the given matrix 
	for(rows = 0; rows < i; rows++){
		sumDia = sumDia + a[rows][rows];
	}
	printf("Sum of Diagonal : %d", sumDia);
		  
	return 0;  
}  
