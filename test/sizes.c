#include <stdlib.h>
#include <stdio.h>
#include <string.h>





typedef struct{
	char suite;
	unsigned char value;

} Card;

typedef struct{
	Card deck[52];

} Deck;


int main(){

	printf("This is the size of a card in memory: %d\n", sizeof(Card));

	Card king;
	king.value = 13;
	

	king.suite = 'D';


	printf("This is the size of king of Diamonds in memory: %d\n", sizeof(king));

	
	printf("This is the size of a deck in memory: %d\n", sizeof(Deck));

	printf("This is the %d of the king card\n", king.value);


	return 0;
}
