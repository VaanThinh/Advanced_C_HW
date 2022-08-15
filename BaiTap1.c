/*
 * BaiTap01.c
 *
 *  Created on: Aug 14, 2022
 *      Author: VaanThinh
 */

#include <stdio.h>

char a[] = "Thinh"; // 84 104 105 110 104
char b[] = "Thinh";

char isEqual(char *arr1, char *arr2)
{
  char sizeOfArr[2] = {0, 0};  // 0: size of arr1, 1: size of arr2
  char *idxPtr;

  // Get strings size
  idxPtr = arr1;
  while(*idxPtr != 0)
  {
    sizeOfArr[0]++;
    idxPtr++;
  }
  idxPtr = arr2;
  while(*idxPtr != 0)
  {
    sizeOfArr[1]++;
    idxPtr++;
  }

  // Compare strings' length
  if(sizeOfArr[0] != sizeOfArr[1])
  {
    return 0;
  }

  // Compare two strings
  for(char i = 0; i < sizeOfArr[0]; i++)
  {
    if(*(arr1 + i) != *(arr2 + i))
    {
      return 0;
    }
  }
  return 1;

}

int main()
{
  char result;
  result = isEqual(a, b);
  result == 0 ? printf("Two strings are different.") : printf("Two strings are the same.");

  return 0;
}

