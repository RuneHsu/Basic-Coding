
#include <iostream>

using namespace std;

int calCow(int iYears)
{
    int iCnt = 0;
    int lCowsNum = 1;
    for (iCnt = 1; iCnt <= iYears; iCnt++)
    {
        if(iCnt >= 4)
        {
            if (iYears - iCnt > 3)
            {
                lCowsNum += calCow(iYears - iCnt);
            }
            else
            {
                lCowsNum++;
            }
        }
    }
    return lCowsNum;
}
int main()
{
    int iYears = 0;
    cin >> iYears;
    cout << calCow(iYears) << endl;
    return 0;
}
