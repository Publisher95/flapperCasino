#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "card.h"



// This is the blackjack game implementation
// there should be a max player count 

int totalHand(Player person){

	




}


void blackjack(){
	Card mainDeck[DECK_SIZE];
	char input = 'y';
	char winner = 'n';
	int i;
	while(input == 'y'){

		Player dealer = initPlayer();
		Player player = initPlayer();

		createDeck(mainDeck);
		shuffleDeck(mainDeck);
		for(i = 0; i < SIZE_OF_HAND; ++i){
			dealer.hand[i] = deal(mainDeck);
			player.hand[i] = deal(mainDeck);
		}

		printf("The dealer has: ");
		printCard(dealer.hand[0]);

		printf("\n\n\n");

		printf("You have: ");
		printCard(player.hand[0]);
		printf(" and ");
		printCard(player.hand[1]);

		printf("\n\n\n");
		if(hasBlackjack(dealer) && hasBlackjack(player)){
			printf("It's a push! Dealer and Player have blackjack\n");
		}
		else if(hasBlackjack(dealer) || hasBlackjack(player)){
			if(hasBlackjack(player)){
				printf("Player wins the round!\n");
			}
			else{
				printf("Dealer wins the round!\n");
			}
		}
		else {
			printf("Would you like to hit or stand?(d/s): ");
			scanf(" %c", &input);
			while(true){

				scanf(" %c", &input);
				if(input == 'd'){
					player.hand[i] = deal(mainDeck);
					printCard(player.hand[i]);
					++i;
				}
				else if(input == 's') break; 
				else{
					printf("Invalid option.\n");
				}
			}


		}

		
		printf("Would you like to play again?(y/n): ");
		scanf(" %c", &input);

		while(input != 'y' && input != 'n'){
			printf("Invalid response.\n");
			printf("Would you like to play again?(y/n): ");
			scanf(" %c", &input);
		}
		

	}



}

int main(){
	blackjack();
	return 0;
}



