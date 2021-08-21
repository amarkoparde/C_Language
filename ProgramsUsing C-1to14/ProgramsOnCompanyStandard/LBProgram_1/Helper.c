#include "Header.h"    //Header file inclusion

////////////////////////////////////////////////////////////
//
//Function Name : ChkEvenOdd
//Parameters    : Integer
//Return Value  : Integer/BOOLEAN
//Description   : It is used to check number is even or odd
//Author        : Amar Raghunath Koparde
//
///////////////////////////////////////////////////////////

//Function Definition

BOOLEAN ChkEvenOdd(int iNo)               //Input of the function
{
	int iReult=0;	                      //Local variable
	
	iReult=iNo%2;                         //Mod operator which returns remainder after division
	
	if(iReult==1)                         //If remainder is 1 means number is odd 
	{
		return FALSE;                     //False indicates number is odd 
	}
	else
	{
		return TRUE;                      //True indicates number is even
	}
	
}