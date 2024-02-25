bool gameStatus(int Size, char userArray[][Size], int difficultyLevel) {
  for (int a = 0; a <= Size - 1; a++) {
    for (int b = 0; b <= Size - 1; b++) {
      for (int c = 0; c < 4; c++) {
        int score = calculateScoreInDir(a, b, c, Size, userArray);
        if (score == difficultyLevel) {
          return true;
        }
      }
    }
  }
  return false;
}
