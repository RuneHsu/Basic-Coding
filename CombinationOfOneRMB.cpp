#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int m, n, k = 0;
    cout << "1fen " << "2fen " << "5fen \n";
    for (m = 0; m <= 100 / 5; ++m)  // as 5fen can be combinated by 1 and 2
    {                               
        for (n = 0; n <= (100 - 5*m) / 2; n++)    // calculate how many 2 are needed in a comb
        {
            cout << 100 - 5*m - 2*n << " " << n << " " << m << endl;
            k++;
        }
    }
    cout << " Has " << k << " combinations. \n";
    return 0;
}
