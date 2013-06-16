
#include <iostream>
#include "BottleManager.h"

int main( int argv, char* argc )
{
    int NUM_BOTTLES = 99;

    BottleManager bm( NUM_BOTTLES );

    while( bm.hasBottles() )
    {
        std::cout << bm.getNumBottles() << " bottles of beer on the wall, " << bm.getNumBottles() << " bottles of beer. " << std::endl << "Take one down, pass it around, ";
        bm.drink();
        std::cout << bm.getNumBottles() << " bottles of beer on the wall. " << std::endl << std::endl;
    }

    return 0;
}