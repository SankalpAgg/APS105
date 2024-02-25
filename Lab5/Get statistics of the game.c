void appendStatistics(int userChoice[], const int ChoicesNum, int histogram[]) {
  // Fill in the histogram with the number of times each index was picked
  for (int i = 0; i < 20; i++)
  {
   for(int j = 0; j < ChoicesNum; j++)
   {
    if (userChoice[j]==i)
    {
      histogram[i] = histogram[i] + 1;
      }
    }
   }
    for (int a = 0; a < 20; a++)
    {
    ;
    }
}

int frequentBox(int histogram[], const int BoxesNum) {
  // Return the index having the maximum number in histogram
  int b = 0;
  for (int i = 1; i < BoxesNum; i++)
  {
  if (histogram[i] > histogram[b])
  b = i;
  }
  return b;
}
