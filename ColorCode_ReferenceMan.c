#include<stdio.h>
#include "colorcode.h"


void printReferenceManual() 
{
   int referManIndex=1,majorColorIndex;
   printf("PairNumber\t  MajorColor\t     MinorColor\n");
   for(majorColorIndex=0;majorColorIndex<numberOfMajorColors;majorColorIndex++)
   {
     mapMinorColorWithMajorColor(MajorColorNames[majorColorIndex])
   }
 }

void mapMinorColorWithMajorColor(char* majorColor)
{
   int minorColorIndex;
   for(minorColorIndex=0;minorColorIndex<numberOfMinorColors;minorColorIndex++)
      {
          printf("%d\t %s\t  %s\n",referManIndex++,majorColor,MinorColorNames[minorColorIndex]);
      }
}
