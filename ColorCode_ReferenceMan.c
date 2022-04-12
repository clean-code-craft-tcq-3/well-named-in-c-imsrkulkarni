#include<stdio.h>
#include "colorcode.h"


void printReferenceManual() 
{
   int referManIndex=1,majorColorIndex,minorColorIndex;
   printf("PairNumber\t  MajorColor\t     MinorColor\n");
   for(majorColorIndex=0;majorColorIndex<numberOfMajorColors;majorColorIndex++)
   {
      for(minorColorIndex=0;minorColorIndex<numberOfMinorColors;minorColorIndex++)
      {
          printf("%d\t %s\t  %s\n",referManIndex++,MajorColorNames[majorColorIndex],MinorColorNames[minorColorIndex]);
      }
   }
 }
