#include <stdio.h>
#include <stdlib.h>
#include "perimeter.h"

ull perimeter(int n) {
    // count how many times to add as final result
    int i;
    // count how many times to add as new series number
    int j;
    // first value in a list, for example: 1 1 2, the leftest 1 is firstResult, then 1 2 3, 1 is the firstResult
    int firstResult;
    // the sum of fibonacci sequence.
    int secondResult = 0;
    // each serie number
    int seriesResult;
    // the final answer
    int finalResult;
    // second value in a list, for example: 1 1 2, the middle 1 is tem, then 1 2 3, 2 is the tem
    int tem;
    // pointer to add series number together
    int *p;
    // if input is invalid, return false
    if ( n < 1)
    {
        return -1;
    }
    // if input is 1, directly return the result
    else if ( n == 1)
    {
        finalResult = 8;
        return finalResult;
    }
    // the outside for loop is to calculate the final result
    for(i = 0;i <= n - 1;i++)
    {
        // give first value is 1, because we need to calculate n+1 
        // so we can start from 1, not 0.
        firstResult = 1;
        // reset seriesRusult.
        seriesResult = 2;
        // reset tem.
        tem = 2;
        // use pointer to store the sum of fibonacci sequence.
        p = &secondResult;
        // the inside for loop is to calculate new fibonacci sequence.
        // note: the seriesResult is from 2 3 5 8 ...
        for(j = 1;j <= i - 1;j++)
        {
            // calculate fibonacci sequence.
            seriesResult = firstResult + tem;
            // give right side value to left.
            firstResult = tem;
            // give the fibonacci value to right and move on.
            tem = seriesResult;
        }
        // calculate the sum.
        *p = *p + seriesResult;
    }
    // the way to calculate the final result.
    finalResult = 4 * (secondResult);
    return finalResult;
}

