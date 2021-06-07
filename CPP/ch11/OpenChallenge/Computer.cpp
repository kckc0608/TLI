#include "Computer.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using std::cout;
string Computer::turn()
{
    srand((unsigned)time(0));
    int n = rand() % 3;
    cout << getName() << ": " << gbb[n] << endl;;
    return AbstractPlayer::gbb[n];
}
