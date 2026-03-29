#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "cardImplementation.h"



// This is the blackjack game implementation
// there should be a max player count 

// This allows for a quick init of the deck itself for each card only needing 


bool hasBlackjack(Player person){
	
	int highAce = 0;
	int lowAce = 0; 

	for (int i = 0; i < MAX_HAND; ++i){
		highAce += (person.hand[i] == 1) ? (person.hand[i]+10) : person.hand[i];
		lowAce += person.hand[i];
		if(highAce > 21 && lowAce > 21) return false;
	}
	return true;
}


void blackjack(){
	Card mainDeck[DECK_SIZE];
	char input = 'y';
	char winner = 'n';
	int i;
	while(input == 'y'){

		Player dealer;
		Player player;


		createDeck(mainDeck);
		shuffleDeck(mainDeck);
		for(i = 0; i < SIZE_OF_HAND; ++i){
			Dealer[i] = deal(mainDeck);
			player1[i] = deal(mainDeck);
		}

		printf("The dealer has: ");
		printCard(dealer.hand[0]);

		print("\n\n\n");

		printf("You have: ");
		printCard(player.hand[0]);
		printf(" and ");
		printCard(Player.hand[1]);

		

		
		printf("Would you like to hit or stand?: ");
		

		




	}



}

int main(){
	blackjack();
	return 0;
}



