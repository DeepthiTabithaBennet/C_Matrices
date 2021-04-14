#include <stdio.h>

int main(){
	int n,a[3][3],i,j;

	printf("Enter Data Elements for a 3 x 3 Matrix:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Input Matrix:");
	for(i = 0; i < 3; i++){
		printf("\n");
		for(j = 0; j < 3; j++){
			printf("%d \t", a[i][j]);
		}
	}
	
	
	printf("\n\nEnter 1 to compute the Transpose\n");
	printf("Enter 2 to identify Upper/Lower Triangular Matrix\n");
	printf("Enter 3 to print the Leading Diagonal\n");
	scanf("%d", &n);
	
	switch(n){

	case 1:{
		printf("\n\nTranspose:");
		for(i = 0; i < 3; i++){
			printf("\n");
			for(j = 0; j < 3; j++){
				printf("%d \t", a[j][i]);
			}
		}
		break;
	}

	case 2:{
		if(a[0][1] == 0 && a[0][2] == 0 && a[1][2] == 0)
			printf("\nLower Triangular Matrix");

		else if (a[1][0] == 0 && a[2][0] == 0 && a[2][1] == 0)
			printf("\nUpper Triangular Matrix");

		else 
			printf("\nNull");
		
		break;
	}
	
	case 3:{
		printf("\n\nLeading Diagonal: \n%d %d %d", a[0][0], a[1][1], a[2][2]);
		break;
	}

	default:
		printf("\nInvalid Input");
	}
	return 0;
}
