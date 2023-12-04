//B(f). Write a program for a matchstick game being played between 
//the computer and a user. Your program should ensure that the 
//computer always wins. Rules for the game are as follows:
//	-There are 21 matchsticks. 
//	- The computer asks the player to pick 1, 2, 3, or 4 matchsticks. 
//	- After the person picks, the computer does its picking. 
//	- Whoever is forced to pick up the last matchstick loses the game.
	
#include<stdio.h>
 void main(){
 	int player, computer = 3, sticks = 21,turn = 0;
 	
 	printf("Pick 1/2/3/4 Matchsticks: ");
 	scanf("%d",&player);
 	if (player > 4 || player < 1){
 		printf("Invalid Number, You Lost! ");
 		return;
	 }else{
		if(player%2 == 0){
			computer = 2;
		}
		while(sticks > 0){
			if(turn == 0){
				sticks -= player;
				turn++;
			}else{
				sticks -= computer;
				turn--;
			}
		}
	}
	
	if(turn == 0){
		printf("Player Won!");
	}else{
		printf("Computer Won!");
	}
 	
 }
