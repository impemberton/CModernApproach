#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5


void read_cards(int cards[NUM_CARDS][2]);
void analyse_hand(int cards[NUM_CARDS][2], bool *above_nine, bool *straight, bool *flush, bool *four, bool *three, int *pairs);
void print_result(bool above_nine, bool straight, bool flush, bool four, bool three, int pairs);

int main(void) {
    int cards[NUM_CARDS][2];
    bool above_nine, straight, flush, four, three;
    int pairs;

    for (;;) {
        read_cards(cards);
        analyse_hand(cards, &above_nine, &straight, &flush, &four, &three, &pairs);
        print_result(above_nine, straight, flush, four, three, pairs);
    }
}

void read_cards(int cards[NUM_CARDS][2]) {
  bool card_exists[NUM_RANKS][NUM_SUITS];
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;

  for (rank = 0; rank < NUM_RANKS; rank++) {
    for (suit = 0; suit < NUM_SUITS; suit++)
      card_exists[rank][suit] = false;
  }
  
  while (cards_read < NUM_CARDS) {
    bad_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();
    switch (rank_ch) {
      case '0':           exit(EXIT_SUCCESS);
      case '2':           cards[cards_read][0] = 0; break;
      case '3':           cards[cards_read][0] = 1; break;
      case '4':           cards[cards_read][0] = 2; break;
      case '5':           cards[cards_read][0] = 3; break;
      case '6':           cards[cards_read][0] = 4; break;
      case '7':           cards[cards_read][0] = 5; break;
      case '8':           cards[cards_read][0] = 6; break;
      case '9':           cards[cards_read][0] = 7; break;
      case 't': case 'T': cards[cards_read][0] = 8; break;
      case 'j': case 'J': cards[cards_read][0] = 9; break;
      case 'q': case 'Q': cards[cards_read][0] = 10; break;
      case 'k': case 'K': cards[cards_read][0] = 11; break;
      case 'a': case 'A': cards[cards_read][0] = 12; break;
      default:            bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) {
      case 'c': case 'C': cards[cards_read][1] = 0; break;
      case 'd': case 'D': cards[cards_read][1] = 1; break;
      case 'h': case 'H': cards[cards_read][1] = 2; break;
      case 's': case 'S': cards[cards_read][1] = 3; break;
      default:            bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ') bad_card = true;

    if (bad_card)
      printf("Bad card; ignored.\n");
    else if (card_exists[cards[cards_read][0]][cards[cards_read][1]])
        printf("Duplicate card; ignored\n");
    else {
      card_exists[cards[cards_read][0]][cards[cards_read][1]] = true;
      cards_read++;
    }
  }
}

void analyse_hand(int cards[NUM_CARDS][2], bool *above_nine, bool *straight, bool *flush, bool *four, bool *three, int *pairs) {
  int sum_of_differences = 0;
  int sum_of_differences_ace_low = 0;
  int same = 0;
  *above_nine = true;
  *straight = false;
  *flush = true;
  *four = false;
  *three = false;
  *pairs = 0;

  /* check whether all cards are between 10 and ace */
  for (int card = 0; card < NUM_CARDS; card++)
    if (cards[card][0] < 8) 
      *above_nine = false;

  /* check for flush */
  for (int card = 1; card < NUM_CARDS; card++)
    if (cards[card - 1][1] != cards[card][1])
      *flush = false;

  /* check for straight */
  for (int card1 = 0; card1 < NUM_CARDS; card1++)
    for (int card2 = 0; card2 < NUM_CARDS; card2++) {
      sum_of_differences += abs(cards[card1][0] - cards[card2][0]);
      sum_of_differences_ace_low += abs((cards[card1][0] == 12 ? -1 : cards[card1][0]) - (cards[card2][0] == 12 ? -1 : cards[card2][0]));
    }
  if (sum_of_differences == 40 || sum_of_differences_ace_low == 40)
    *straight = true;

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
  for (int card1 = 0; card1 < NUM_CARDS; card1++) {
    same = 1;
    for (int card2 = 0; card2 < NUM_CARDS; card2++) {
      if (cards[card1][0] == cards[card2][0] && card1 != card2) 
        same++;
    }
    if (same == 4) *four = true;
    if (same == 3) *three = true;
    if (same == 2) *pairs++;
  }
  *pairs /= 2;
}

void print_result(bool above_nine, bool straight, bool flush, bool four, bool three, int pairs){
  if (straight && flush && above_nine)  printf("Royal flush");
  else if (straight && flush)   printf("Straight flush");
  else if (four)                printf("Four of a kind");
  else if (three && pairs == 1) printf("Full house");
  else if (flush)               printf("Flush");
  else if (straight)            printf("Straight");
  else if (three)               printf("Three of a kind");
  else if (pairs == 2)          printf("Two Pair");
  else if (pairs == 1)          printf("Pair");
  else                          printf("High card");

  printf("\n\n");
}
