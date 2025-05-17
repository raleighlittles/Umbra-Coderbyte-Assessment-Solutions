#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string FormattedNumber(string strArr, int strLen) {

    // Split the string into an integer part and a "decimal" part, validate one at a time.
    // Easy rules:
    // 1a) A valid string cannot contain more than one decimal/period ('.')
    // 1b) A valid string cannot start with a period or end with a period
    //
    // 2) At the index in a string where a comma occurs, either a comma or a period must occur exactly 4 positions to the
    // right

    string result = "false";

    // Rule 1a
    if (count(strArr.begin(), strArr.end(), '.')> 1U) {
        result = "false";
        return result;
    }

    // Rule 1b
    if ((strArr.at(0) == '.') || (strArr.at(strLen - 1) == '.'))
    {
        result = "false";
        return result;
    }

    const size_t periodIdx = strArr.find('.');
    string integerPortion = strArr.substr(0, periodIdx);

    constexpr size_t COMMA_SEPARATOR_DISTANCE = 4U;

    // Rule 2
    for (unsigned int i = 0; i < integerPortion.size(); i++) {

        if (strArr.at(i) == ',') {
            if ((strArr.at(i+COMMA_SEPARATOR_DISTANCE) != ',') && (strArr.at(i+COMMA_SEPARATOR_DISTANCE) != '.')) {
                result = "false";
                return result;
            }
        }
    }


    result = "true";
    return result;
}