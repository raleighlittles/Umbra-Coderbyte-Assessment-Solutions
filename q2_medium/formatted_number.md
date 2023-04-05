# Formatted number

Have the function `FormattedNumber(strArr)` take the `strArr` parameter being passed, which will only contain a single element, and return the string **true** if it is a valid number that only contains digits with properly placed decimals and commas, otherwise return the string **false**.

For example: if `strArr` is ["1,093,222.04"] then your program should return the string **true**, but if the input were ["1,093,22.04"] then your program should return the string **false**. The input may contain characters other than digits.

## Test cases

| Input          | Expected output |
|----------------|-----------------|
| "1,093,222.04" | true            |
| "1,093,22.04"  | false           |
| "0.232567"     | true            |
| "2,567.00.2"   | false           |