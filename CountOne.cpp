int func(x)
{
  int countx = 0;
  while(x)
  {
    countx++:
    x = x & (x - 1);
  }
  return countx;
}

// eg. x = 9999 = 9 * 1024 + 512 + 256 + 15. So there are 2 ones in 9 * 1024, 1 one in 512, 1 one in 256, 4 ones in 15.
// Such that we got 8 ones in 9999.
// 1000 - 1 = 0111. complementary
