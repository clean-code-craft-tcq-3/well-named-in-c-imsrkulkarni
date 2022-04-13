#include<stdio.h>
#include "colorcode.h"


void printReferenceManual() 
{
   int majorColorIndex;
   printf("PairNumber\t  MajorColor\t     MinorColor\n");
   for(majorColorIndex=0;majorColorIndex<numberOfMajorColors;majorColorIndex++)
   {
     mapMinorColorWithMajorColor(MajorColorNames[majorColorIndex])
   }
 }

void mapMinorColorWithMajorColor(char* majorColor)
{
   int minorColorIndex,referManIndex=1;
   for(minorColorIndex=0;minorColorIndex<numberOfMinorColors;minorColorIndex++)
      {
          printf("%d\t %s\t  %s\n",referManIndex++,majorColor,MinorColorNames[minorColorIndex]);
      }
}
