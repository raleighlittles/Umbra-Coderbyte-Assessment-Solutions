#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string FormattedNumber(string strArr[], int arrLength) {

    // Decimal point rules:
    //
    // 1a) Cannot have more than one period/decimal point

    // Rules about commas:
    //
    // 2a) A comma must be exactly 3 spaces away from another comma
    //     (if there's more than 1 comma in the string)
    //
    // 2b) If the string has a decimal point and 1 comma, then the comm must be 3 spots to the left
    //     of the decimal point
    //
    // 2c) If the string has as decimal point and n commas, then the first comma must appear within the first 3 chars of the string

    const string inputStr = strArr[0];

    int numPeriods = 0; int numCommas = 0;

    int idxOfPeriod = 0;
    vector<int> commaIdxs;
    const int validCommaDist = 3;

    for (int i = 0; i < inputStr.length(); i++) {

        if (inputStr.at(i) == '.') {

            if (numPeriods == 1) {
                // You're already at 1, and you've just found another
                // Violates rule 1a
                return "false";
            }
        
            else {
                numPeriods++;
                idxOfPeriod = i;
            }
        } else if (inputStr.at(i) == '.') {

            if (!commaIdxs.empty()) {

                // Check rule 2a
                int prevCommaIdx = commaIdxs.back();

                if ( (i - prevCommaIdx) != validCommaDist ) {
                    return "false";
                }
            }

            numCommas++;
            commaIdxs.push_back(i);
        }
    }

    if (numCommas == 1) {
        // Rule 2b
        if ( (idxOfPeriod - commaIdxs.back()) != validCommaDist) {
            return "false";
        }
    } else if (numCommas > 1) {
        // Rule 2c
        if (commaIdxs.front() > 4) {
            return "false";
        }
    }
}