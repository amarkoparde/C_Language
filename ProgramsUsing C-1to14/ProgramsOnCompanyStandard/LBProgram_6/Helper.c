#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayFactor
//  Input : Integer
//  Output :    None
//  Description :   It is used to display the factors
//  Author        : Amar Raghunath Koparde
//
//////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)         // 12
{
    int iCnt = 0;                         // 0  1   2   3   4   5   6   ....... 11  12
    // Sequance of loop 1   2   4  3   2   4  3   2    4  3   2    4  3   2     4 ..........
    //           1              2            3
    for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
       if((iNo % iCnt) == 0)        // 4
       {
               printf("%d\n",iCnt);
       }
    }
}
// Outpout : 1  2   3   4
/*
 
 Session Discussion

Input   : 8     store into iNo
 
// Sequance approach
if(iNo % 1 == 0)        -> printf(1)
if(iNo % 2 == 0)        -> printf(2)
if(iNo % 3 == 0)        ->
if(iNo % 4 == 0)        -> printf(4)
if(iNo % 5 == 0)        ->
if(iNo % 6 == 0)        ->
if(iNo % 7 == 0)        ->
 
1       start kuthun karayecha?                         1
2       Kuthparynta loop iterate karayecha?        7
3       kiti kiti ne loop pudhe nyecha?                 1
4       loop madhe kay karayecha?                   Factor ahe ka nai te baghayecha

 int iCnt = 0;
            1              2            3
 for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
 {
    if(iNo % iCnt == 0)        // 4
    {
            printf("%d\n",iCnt);
    }
 }
 
 

*/














