#include "card.h"

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

Player initPlayer(){
	Player player;
	for(int i = 0; i < MAX_HAND; ++i){
		player.hand[i].suite = 'n';
		player.hand[i].value = 0;
	}
	return player;
}



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
	Card nullCard;
	nullCard.suite = 'n';
	nullCard.value = 0;


	for(int i = 0; i < DECK_SIZE; ++i){
		if(deck[i].value != 0){
			dealing = deck[i];
			deck[i].suite = 'n';
			deck[i].value = 0;
			return dealing;
		}
	}
	return nullCard;
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
