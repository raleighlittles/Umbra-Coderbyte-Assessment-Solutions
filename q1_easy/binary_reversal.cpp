#include <bitset>
#include <iostream>
#include <string>

using namespace std;

string BinaryReversal(string str) {

    // Convert string -> int -> binary -> padded, then reversed
    // -> decimal int -> str

    const int width = 8;

    const int strAsInt = stoi(str);

    bitset<width> intAsBits(strAsInt);

    bitset<width> intAsBitsReversed;

    for (int i = 0; i < width; i++) 
    {
        // -1 to account for the 1-index
        intAsBitsReversed[i] = intAsBits[width-i-1];
    }

    int reversedInt = static_cast<int>(intAsBitsReversed.to_ulong());

    return to_string(reversedInt);
}