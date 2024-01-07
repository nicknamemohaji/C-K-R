/*
Q. Remove the num_in_rank and num_in_suit arrays from the poker.c program of Section 10.5.
Have the program store the cards in a 5 x 2 array instead. Each row of the array will represent a card.
For example, if the array is named hand, then hand[0][0] will store the rank of the first card and
hand[0][1] will store the suit of the first card.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

// external variables
bool straight, flush;
bool four, three; // 풀하우스 (트리플 + 페어) 때문에 pairs 변수가 별도로 필요하다.
int pairs; // can be 0, 1 or 2
int hand[NUM_CARDS][2];

// prototypes
void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void) {
    for (;;) {
        read_cards();
        analyze_hand();
        print_result();
    }
}

void read_cards(void){
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for (int i = 0; i < NUM_CARDS; i++) {
        hand[i][0] = -1;
        hand[i][1] = -1;
    }

    while (cards_read < NUM_CARDS) {
        bad_card = false;
        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':
                exit(EXIT_SUCCESS);
            case '2':
                rank = 0;
                break;
            case '3':
                rank = 1;
                break;
            case '4':
                rank = 2;
                break;
            case '5':
                rank = 3;
                break;
            case '6':
                rank = 4;
                break;
            case '7':
                rank = 5;
                break;
            case '8':
                rank = 6;
                break;
            case '9':
                rank = 7;
                break;
            case 't':
                rank = 8;
                break;
            case 'j':
                rank = 9;
                break;
            case 'q':
                rank = 10;
                break;
            case 'k':
                rank = 11;
                break;
            case 'a':
                rank = 12;
                break;
            default:
                bad_card = true;
        }
        suit_ch = getchar();
        switch (suit_ch) {
            case 'c':   // FALLTHROUGH
            case 'C':
                suit = 0;
                break;
            case 'd':   // FALLTHROUGH
            case 'D':
                suit = 1;
                break;
            case 'h':   // FALLTHROUGH
            case 'H':
                suit = 2;
                break;
            case 's':   // FALLTHROUGH
            case 'S':
                suit = 3;
                break;
            default:
                bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ')
                bad_card = true;

        if (bad_card)
            printf("Bad card; ignored.\n");
        for (int i = 0; i < NUM_CARDS; i++)
        {
            if (hand[i][0] == rank && hand[i][1] == suit)
            {
                printf("Duplicate card; ignored.\n");
                bad_card = true;
            }
        }
        if (bad_card)
            continue;
        else {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

void analyze_hand(void) {
    int num_consec = 0;
    int rank, suit;
    int num_in_rank[NUM_RANKS] = {0};
    int num_in_suit[NUM_SUITS] = {0};


    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    for (int i = 0; i < NUM_CARDS; i++) {
        num_in_rank[hand[i][0]]++;
        num_in_suit[hand[i][1]]++;
    }

    for (suit = 0; suit < NUM_SUITS; suit++)
        if (num_in_suit[suit] == NUM_CARDS)
            flush = true;

    rank = 0;
    while (num_in_rank[rank] == 0) rank++;

    for (; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
        num_consec++;
    if (num_consec == NUM_CARDS) {
        straight = true;
        return;
    }

    for (rank = 0; rank < NUM_RANKS; rank++) {
        if (num_in_rank[rank] == 4) four = true;
        if (num_in_rank[rank] == 3) three = true;
        if (num_in_rank[rank] == 2) pairs++;
    }
}

void print_result(void) {
    if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four for a kind");
    else if (three && pairs == 1)
        printf("Full house");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (three)
        printf("Three of a kind");
    else if (pairs == 2)
        printf("Two pairs");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High card");

    printf("\n\n");
}