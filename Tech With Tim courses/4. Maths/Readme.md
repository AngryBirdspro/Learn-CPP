# Introduction asic math functions
## Largest vs smallest value
In C++, _min()_ is used to find the smallest integer or float value whereas _max()_ is used to find the largest value. The values must be typed into listing format in the brackets so that C++ can determine the smallest/biggest value in the list. 

## Rounding decimals
_round()_ is a function used to round a float to a whole numebr by default by typing the value that needds rounding into the brackets. In order to improvise so it can round to a desired amount of decimals, for example 2 decimal places, the float must be multiplied by 100 first and then divided again like this: round(3.14159265359 * 100) / 100. If it needs to be rounded to 3 decimal points, it must be multiplied by 1000 and so on.