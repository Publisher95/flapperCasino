#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// This is the blackjack game implementation
// there should be a max player count 

// This allows for a quick init of the deck itself for each card only needing 

typedef struct{
	char suite;
	unsigned char value;
} Card;

typedef struct{
	Card deck[2];
} Player;



void createDeck(Card newDeck[]){
	
	char suites[4] = {'D','H','C','S'}

	for(int i = 0; i < 52; ++i){
		Card* newCard;
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
	
	for(int i = 51; i > 0; i--){
		int j = rand() % (i+1);
	
	swap(&deck[i], &deck[j]);
	}
}


Card deal(Card deck[]){
	Card dealing;

	for(int i = 0; i < 52; ++i){
		if(deck[i] != 0){
			dealing = deck[i];
			deck[i] = 0;
			return dealing;
		}
	}
	return 0;
}



void blackjack(){
	Card mainDeck[52];

	createDeck(mainDeck);
	shuffleDeck(mainDeck);

	Player Dealer;
	Player player1;

	for(int i = 0; i < 2; ++i){
		Dealer[i] = deal(mainDeck);
		player1[i] = deal(mainDeck);
	}





}


