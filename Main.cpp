#include "EnemyClass.h"

int main() {

    Skeleton skeleton;
    Troll troll;
    Orc orc;
    DarkOrc darkOrc;

    cout << "\nSkeleton's attack:\n"; 
    skeleton.attack();

    cout << "\nTroll's attack:\n";
    troll.attack();

    cout << "\nOrc's attack:\n";
    orc.attack();

    cout << "\nDark Orc's attack\n";
    darkOrc.attack();

    return 0;
}