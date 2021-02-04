#include <stdio.h>
#include <conio.h>
#include <unistd.h>

int main(){
	int i, j, input, k;
	int pattern, space;
	printf("Enter the input num: \n");
	scanf("%d", &input);
	printf("SELECT FROM FOLLOWING OPTIONS\n"
			 "1. STARPYRAMIDINC\n"
			 "2. STARPYRAMIDDEC \n"
			 "3. STARPYRAMIDINCMID\n"
			 "4. STARPYRAMIDDECMID \n"
			 "5. STARPYRAMIDTOPBOTTOM \n");
	scanf("%d", &pattern);
	printf("SELECTED PATTERN: %d\n",pattern);
	while(pattern >= 1 && pattern <= 5){
		switch(pattern){
		case 1:
			printf("PYRAMID INCREMENT\n");
			for(i=0; i<=input; i++){
		
				for(j=0; j<=i; j++){
			
					printf("* ");
				}
			
			printf("\n");	
			}
			break;
		case 2:
			printf("PYRAMID DECREMENT\n");
			for(i=input; i>=0; i--){
		
				for(j=0; j<=i; j++){
			
					printf("* ");
				}
			
			printf("\n");	
			}
			break;
		case 3:
			printf("PYRAMID MID INCREMENT\n");
			printf("ENTER THE SPACE VAL:\n");
			scanf("%d", &space);
			for(i=0; i<=input; i++){
				
				for(j=0; j<space; j++){
					
					printf(" ");
				}
		
				for(j=0; j<=i; j++){
			
					printf("* ");
				}
				
			printf("\n");	
			space--;
			}
			break;
		case 4:
			printf("PYRAMID MID INCREMENT\n");
			printf("ENTER THE SPACE VAL:\n");
			scanf("%d", &space);
			for(i=input; i>=0; i--){
				
				for(j=0; j<space; j++){
					
					printf(" ");
				}
		
				for(j=0; j<=i; j++){
			
					printf("* ");
				}
				
			printf("\n");	
			space++;
			}
			break;
		case 5:
			printf("PYRAMID MID DECREMENT\n");
			printf("ENTER THE SPACE VAL:\n");
			scanf("%d", &space);
			for(i=0; i<=input; i++){
				
				for(j=0; j<space; j++){
					
					printf(" ");
				}
		
				for(j=0; j<=i; j++){
			
					printf("* ");
				}
				
			printf("\n");	
			space--;
			}
			
			space = 0;
			
			for(i=input; i>=0; i--){
				
				for(j=0; j<space; j++){
					
					printf(" ");
				}
		
				for(j=0; j<=i; j++){
			
					printf("* ");
				}
			printf("\n");	
			space++;
			}
			break;
		default:
			printf("NOTHING SELECTED, SELECT FROM 1 to 5\n");
			break;		
	}
	main();
	}
	//main();
	return 0;		
}
