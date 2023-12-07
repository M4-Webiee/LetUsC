#include<stdio.h>

void main(){
	int cls, fSub;
	
	printf("Enter the class (1/2/3) followed by number of subjects failed: ");
	scanf("%d%d",&cls,&fSub);
	
	switch(cls){
		case 1:
			switch(fSub){
				case 1:
				case 2:
				case 3:
					printf("5 grace marks per subject ie. %d",5*fSub);
					break;
				default:
					printf("No grace for %d failed subjects.",fSub);
			}
			break;
		case 2:
			switch(fSub){
				case 1:
				case 2:
					printf("4 grace marks per subject ie. %d",4*fSub);
					break;
				default:
					printf("No grace for %d failed subjects.",fSub);
			}
			break;
		case 3:
			switch(fSub){
				case 1:
					printf("5 grace marks per subject ie. %d",5*fSub);
					break;
				default:
					printf("No grace for %d failed subjects.",fSub);
			}
			break;
		default:
			printf("class can only be 1/2/3.");
	}
	
	}
