void getInput(int* row, int* col, int Size) {
  bool con = false;
  printf("Enter user input: ");
  scanf("%d %d", row, col);

  while (!con) {
    if (validRowCol(*row, *col, Size)) {
      con = true;
    } else {
      printf("Please enter your row and col to be between 0 and Size - 1: ");
      scanf("%d %d", row, col);
    }
  }
}

bool validRowCol(int row, int col, int Size) {
  bool ans = false;
  if (row >= 0 && row <= Size - 1 && col >= 0 && col <= Size - 1) {
    ans = true;
  }
  return ans;
}

void getLevelAndDimensions(int* Size, int* levelOfDiff, const int maxDim) {
  printf("Enter the difficulty level: ");
  scanf(" %d", levelOfDiff);

  while (*levelOfDiff < 1 || *levelOfDiff > maxDim) {
    printf("Please enter a difficulty level between 1 and 23: ");
    scanf(" %d", levelOfDiff);
  }
  printf("Enter the dimensions of the grid: ");
  scanf(" %d", Size);
  while (*Size < *levelOfDiff || *Size > maxDim) {
    printf("Please enter dimensions >= %d: ", *levelOfDiff);
    scanf(" %d", Size);
  }
}

void printBoard(int Size, int grid[][Size]) {
  for (int my = 0; my < Size; my++) {
    for (int tu = 0; tu < Size; tu++) {
      printf("%d", grid[my][tu]);
    }
    printf("\n");
  }
}
