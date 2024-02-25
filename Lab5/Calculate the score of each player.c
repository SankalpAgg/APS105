void calculateScore(int boxes[], const int BoxesNum, int userOne[], int userTwo[], const int ChoicesNum, int* score1, int* score2) {
  // Get the score of each user
  for (int a = 0; a < BoxesNum;a++)
    {
      if (boxes[a] == 10)
      {
        printf("Found 10 in boxes[%d].\n",a);
      }
  
       if(boxes[a] == -10)
      {
         printf("Found -10 in boxes[%d].\n",a);
        
      }
      int first = -1;
      int second = -1;
  for(int b = 0; b < ChoicesNum;b++){
   
    if(a == userOne[b] && boxes[a] == 10){
      printf("Found index %d in player 1.\n",a);
      *score1 +=10;
      first=1;
      continue;
    }
     if (a == userOne[b] && boxes[a] == -10){
       printf("Found index %d in player 1.\n",a);
       *score1 -= 10 ;
       first=0;
       continue;
    }
    }

    for(int b = 0; b < ChoicesNum;b++){
    if (a == userTwo[b] && boxes[a] == 10){
      printf("Found index %d in player 2.\n",a);
      *score2+=10;
      second=1;
      continue;
    }
   if (a == userTwo[b] && boxes[a] == -10){
      printf("Found index %d in player 2.\n",a);
     *score2 -=10;
     second=0;
     continue;
    }
      }

      if (first==second && first==0){
         printf("-10 from player 1 score.\n");
         printf("-10 from player 2 score.\n");
         continue;
      }
    if (first==0){
      printf("-10 from player 1 score.\n");
      continue;
    }
     if (second==0){
      printf("-10 from player 2 score.\n");
       continue;
          }
  
        
     if(first==1 && first==second)
     {
      printf("+5 to players 1 and 2 scores.\n",a);
      *score1 -=5;
      *score2 -=5;
       continue;
    }
     if(first==1){
      printf("+10 to player 1 score.\n");
      continue;
      }
     if (second==1){
        printf("+10 to player 2 score.\n");
      continue;
    }
    
  
      }
  
    }
