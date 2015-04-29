///////////////////////////////////////
//this encrypts the file             //
///////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

// convert string to int for encryption
// pass it a pointer to char array
int toInt(int ptrToString)
{
  // get size
  int sizeOfString = strlen(&ptrToString);
  // return variable
  int encryptedInt;
  //loop through string and convert to number
  int i;
  for(i=0;i<sizeOfString;i++)
  {
    // convert character to integer...
    int convertedChar = (int)&ptrToString[i];
    // and add it to the returned int 
    encryptedInt += convertedChar;
  }
  return encryptedInt;
}
