

#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#define SIZE_OF_HAND 2
#define DECK_SIZE 52
#define MAX_HAND 10

typedef struct{
	char suite;
	unsigned char value;
} Card;

typedef struct{
	Card hand[MAX_HAND];
} Player;

void createDeck(Card newCard[]);

void swap(Card *a, Card *b);

void shuffleDeck(Card deck[]);

Card deal(Card deck[]);

void printCard(Card card);



#endif
