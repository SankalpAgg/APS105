#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void populateBoxes(int[], int);
void takeUserChoices(int[], int[], const int, const int);
bool validateChoices(int[], const int, const int);
void calculateScore(int[], const int, int[], int[], const int, int*,
                    int*);  // calculate the score of each user
void appendStatistics(int[], const int, int[]);
int frequentBox(int[], const int);

int main(void) {
  // don't set srand!
  const int BoxesNum = 20;
  const int ChoicesNum = 5;
  int boxes[BoxesNum], userOne[ChoicesNum], userTwo[ChoicesNum],
      histogramUserOne[BoxesNum], histogramUserTwo[BoxesNum];

  int userOneScore = 0, userTwoScore = 0;
  while(1){

  for (int i = 0; i < BoxesNum; i++) {
    histogramUserOne[i] = 0;
    histogramUserTwo[i] = 0;
  }

  populateBoxes(boxes, BoxesNum);

  takeUserChoices(userOne, userTwo, ChoicesNum, BoxesNum);

  calculateScore(boxes, BoxesNum, userOne, userTwo, ChoicesNum, &userOneScore,
                 &userTwoScore);

  // Append Statistics for User One
  appendStatistics(userOne, ChoicesNum, histogramUserOne);
  // Append Statistics for User Two

  appendStatistics(userTwo, ChoicesNum, histogramUserTwo);

  printf("Player 1: %d.\nPlayer 2: %d.\n", userOneScore, userTwoScore);
  int first = userOneScore-userTwoScore;
  int second = userTwoScore-userOneScore;

  if (first >= 50) {
    printf("User 1 wins, ");
    printf("and the first box they chose most frequently is: %d\n",
           frequentBox(histogramUserOne, BoxesNum));
           break;
  } else if(second >= 50) {
    printf("User 2 wins, ");
    printf("and the first box they chose most frequently is: %d\n",
           frequentBox(histogramUserTwo, BoxesNum));
           break;
  }
  }
  return 0;
}

