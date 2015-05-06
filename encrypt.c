///////////////////////////////////////
//this encrypts the file             //
///////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

// globals
time(timeStamp);
int random = srand(&timeStamp);
int address = &integer;
FILE *data;
// structure for key
struct key{
  int randomNum = srand(timeStamp);
  int address = &randomNum;
  int theTime timeStamp;
  int total = randomNum + address + theTime;
}
// global for key
struct key *encryptKey;

// generate the key
int generateRandomKey(int address)
{
  return (int(address) * timeStamp * 4) ^ 4 /7 + 0x0fab76a;
}
// make salt
void writeKey(int theTimeString = encryptKey->theTime, int randomAddress = encryptKey->address, int randomNumber = encryptKey->randomNum, int total = encryptKey->total)
{
  // init array
  int everything[4];
  // assign values to array
  everything[0] = theTimeString;
  everything[1] = randomAddress;
  everything[2] = randomNumber;
  everything[3] = total;
  // write everything
  int i;
  for(i=0;i<4,i++)
  {
    fwrite(everything[i],sizeof(int), 1, data)
  }
}
