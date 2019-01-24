/*
 *  File Name: dollar.c
 *  Author: Misty Cao78
 *  Date: 1/23/2019
 * 
 * Description: Converts US dollars to Britsh Pounds and Japanese JPY.
 * 
 */
#include <stdio.h>. 

int main(int argc, char **argv) {

    double usDollarAmt;     //Setting up variables
    double britishPoundsAmt;
    double japanYenAmt;

    printf("Please input the total amount of US Dollars: ");
    scanf("%lf", &usDollarAmt);     //User enters amount of US dollars
    usDollarAmt = 0.9 * usDollarAmt;        //Exchange fee of 10% and subsquent calcualations
    britishPoundsAmt = (usDollarAmt / 2) * 0.6;
    japanYenAmt = (usDollarAmt / 2) * 76.8;
    printf("You get %.2f British Pounds and %.2f Japanese JPY", britishPoundsAmt, japanYenAmt);


return 0;
}
