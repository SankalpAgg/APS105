int calculateScoreInDir(int row, int col, int direction, int Size,
                       char userArray[][Size]){
   int c = 0;
   int arow = row;
   int bcol = col;
   if (userArray[row][col] == '0'){
       return c;
   }
   while (validRowCol(arow, bcol, Size) && userArray[arow][bcol] == '1'){     
       c += 1;
       updateRowCol(&arow, &bcol, direction, true);
   }
   updateRowCol(&row, &col, direction, false);
   while (validRowCol(row, col, Size) && userArray[row][col] == '1'){
       c += 1;
       updateRowCol(&row, &col, direction, false);
   }
       return c;
}


void updateRowCol(int* row, int* col, int dir, bool forward) {
   if (forward){
       if (dir == 0){
           *row -= 1;}
       else if (dir == 1){
           *row -= 1;
           *col += 1;}
       else if (dir == 2){
*col += 1;}
       else {
           *row -= 1;
           *col -= 1;}
   }
   else {
       if (dir == 0){
           *row += 1;}
       else if (dir == 1){
           *row += 1;
           *col -= 1;}
       else if (dir == 2){
           *col -= 1;}
else {
           *row += 1;
           *col += 1;}
   }
  
}


bool validRowCol(int row, int col, int Size) {
   bool val = false;
   if (row >= 0 && row <= Size-1 && col >= 0 && col <= Size-1){
       val = true;
   }
   return val;
}

