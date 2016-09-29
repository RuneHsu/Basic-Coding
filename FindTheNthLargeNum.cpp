const int MINNUMBER = -32767;
int find_sec_max(int data[], int count)
{
  int maxNum = data[0];
  int secNum = MINNUMBER;
  for (int i = 1; i < count; ++i)
  {
    if (data[i] > maxNum)
    {
      secNum = maxNum;              // if find larger number
      maxNum = data[i];
    }
    else if (data[i] > secNum)      // if the number larger than second, but smaller than largest
    {
      secNum = data[i];
    }
  }
  return secNum;
}
