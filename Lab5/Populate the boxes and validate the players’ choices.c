void populateBoxes(int boxes[] , const int BoxesNum) 
{
  // TODO: Fill each element randomly by either
  int num[3] = {-10, 0, 10};
  // 0 empty
  // -10 bomb
  // 10 candy
  // Print the contents of the boxes
  for(int p = 0; p < BoxesNum; p++)
{
int a = rand()%3;
boxes[p] = num[a];
printf("%d: %d, ", p, boxes[p]);
}
printf("\n");
}

bool validateChoices(int choices[], const int ChoicesNum, const int BoxesNum) {
  bool valid = true;
  int b = 0;
  // TODO: 
  // Check if elements in choices is between 0 and BoxesNum - 1
  for (int p = 0; p < ChoicesNum; p++)
  {
  if (choices[p]<0 || choices[p] > 19)
  {
  valid = false;
  }
  }

  // Check if elements in choices is distinct
  for (int p = 0; p < ChoicesNum; p++)
  {
  for (int p = 0; p < ChoicesNum; p++)
  {
  for (int d = p + 1; d < ChoicesNum; d++)
  {
  if(choices[p]==choices[d])
  {
  valid = false;
  }
  }
  }
  }
  return valid;
}
