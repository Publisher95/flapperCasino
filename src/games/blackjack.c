#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "typedefs.h"


#define SIZE_OF_HAND 2
#define DECK_SIZE 52

// This is the blackjack game implementation
// there should be a max player count 

// This allows for a quick init of the deck itself for each card only needing 

void createDeck(Card newDeck[]){
	
	char suites[4] = {'D','H','C','S'};

	for(int i = 0; i < DECK_SIZE; ++i){
		Card newCard;
		newCard.suite = suites[i%4];
		newCard.value = (i % 13) + 1;
		newDeck[i] = newCard;
	}
}


void swap(Card *a, Card *b){
	Card temp = *a;
	*a = *b;
	*b = temp;
}


void shuffleDeck(Card deck[]){
	srand(time(NULL));
	
	for(int i = DECK_SIZE-1; i > 0; i--){
		int j = rand() % (i+1);
	
	swap(&deck[i], &deck[j]);
	}
}


Card deal(Card deck[]){
	Card dealing;
	Card null;
	null.value = 0;

	for(int i = 0; i < DECK_SIZE; ++i){
		if(deck[i].value != 0){
			dealing = deck[i];
			deck[i].value = 0;
			return dealing;
		}
	}
	return null;
}

void printCard(Card card){
	//char suites[] = {'D','H','C','S'};
	
	switch (card.value){

	case 1:
		printf("Ace of ");
		break;

	case 11:
		printf("Jack of ");
		break;

	case 12:
		printf("Queen of ");
		break;

	case 13:
		printf("King of ");
		break;

	default:
		printf("%d of ", card.value);
		break;
	}

	switch (card.suite){
	
	case 'D':
		printf("Diamonds");
		break;
	case 'H':
		printf("Hearts");
		break;

	case 'C':
		printf("Clubs");
		break;

	case 'S':
		printf("Spades");
		break;

	}
}

void blackjack(){
	Card mainDeck[DECK_SIZE];
	char input = 'y';
	char winner = 'n';

	while(input == 'y'){

		createDeck(mainDeck);
		shuffleDeck(mainDeck);

		Player dealer;
		Player player;

		for(int i = 0; i < SIZE_OF_HAND; ++i){
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

		if(){


		}
		else{
			while(input != 'h' || input != 's'){
				print


			}
		}




	}



}

int main(){
	blackjack();
	return 0;
}



