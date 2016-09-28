void LoopMove(char *pStr, int steps)
{
  int n = strlen(pStr) - steps;
  char tmp[MAX_LEN];
  strcpy(tmp, pStr + n);
  strcpy(tmp + steps, pStr);
  *(tmp + strlen(pStr)) == '\0';  
  strcpy(pStr, tmp);
}


// or memcpy

void LoopMove(char *pStr, int steps)
{
  int n = strlen(pStr) - steps;
  char tmp[MAX_LEN];
  memcpy(tmp, pStr + n, steps);     // copy the right part into tmp
  memcpy(pStr + steps, pStr, n);    // shift the left part to right
  memcpy(pStr, tmp, steps);
}
