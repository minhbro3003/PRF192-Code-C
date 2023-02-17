#include<stdio.h>

int main(){
	int t;
	printf("Input goc n: ");
	scanf("%d", &t);
	
	switch(t)
	{
		case 1:
			{
				int n, i, j;
				printf("Enter integer: ");
				scanf("%d", &n);
				
				for(i = 0; i < n; i++){
					for(j = 0; j < n; j++){
						if (i <= j)
							printf("* ");
					}
					printf("\n"); 
				}
//			break;	
			}
		case 2:
			{
				int i, j, n;
				printf("Input n: ");
				scanf("%d", &n);
				
				for ( i = 0; i <= n; i++){
					for(j = 0; j <= n; j++){
						if(i <= n - j)
						printf("  ");
						else 
						printf(" *");
					}
					printf("\n"); 
				}
//			break;
			}
		case 3:
			{
				int n, i, j; 
				printf("Input n: ");
				scanf("%d", &n);
				
				for (i = 0; i < n; i++){
					for(j = 0; j < n; j++){
						if(i <= j)
						printf("* ");
						else
						printf("  ");
					}	
					printf("\n");
				}
//			break;	
			}	
		case 4:
			{
				int n, i, j; 
				printf("Input n: ");
				scanf("%d", &n);
				
				for (i = 0; i < n; i++){
					for(j = 0; j < n; j++){
						if(i <= j)
						printf("* ");
					}	
					printf("\n");
				}
			break;
			}	
	}
	
}