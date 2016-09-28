
void NextMinute(int *nYear, int *nMonth, int *nDate, int *nDate, int *nHourm int *nMinute, int *nSecond)
{
  int nDays;
  (*nSecond)++;
  if (*nSecond >= 60)
  {
    *nSecond = 0;
    (*nMinute)++;
    if (*nMinute >= 60)
    {
      *nMinute = 0;
      (*nHour)++;
      if(*nHour >= 24)
      {
       *nHour = 0;
       (*nDate)++;
       switch(*nMonth)
       {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          nDays = 31;
          break;
        case 2:
          if(*nYear % 400 == 0 || *nYear % 100 == 0 && *nYear % 4 == 0)
          {
            nDays = 29;
          }
          else 
          {
            nDays = 28;
          }
          break;
        default:
          nDays = 30;
          break;
        if (*nDate > nDays)
        {
          *nDate = 1;
          (*nMonth)++;
          if (*nMonth > 12)
          {
            *nMonth = 1;
            (*nYear)++;
          }
        }
       }
      }
  }
}
