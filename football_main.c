#include "football.h"
#include <stdio.h>
int main(int argc, char *argv[]) {
    int score;
    printf("Enter 0 or 1 to STOP\nEnter the NFL score: ");
    scanf("%d", &score);
    printf("Possible Combinations if a teams score is %d:\n", score);
    if(score == 0 || score == 1){return 0;}
    else{
        print_combinations(score);
    }
}