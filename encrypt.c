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
int integer = 0
int address = &integer;

FILE *randomAddress;

int generateRandomKey(int address)
{
  return int(address) * __time__ * 4 ^ 4 /7 + 0x0fab76a;
}

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
// generate salt (multiple values
int generateSalt()
{
  struct tm *seconds;
  int seed = rand();
  int theInt = 0;
  theInt = theInt + seed^16 + ((2048 % 3) * 128) / 7;
  return theInt;
}
