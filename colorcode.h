#ifndef _COLORCODE_H
#define _COLORCODE_H

#define MAX_COLORPAIR_NAME_CHARS 16

extern int numberOfMajorColors;
extern int numberOfMinorColors;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair*, char*);
ColorPair GetColorFromPairNumber(int);
int GetPairNumberFromColor(const ColorPair*);
void testNumberToPair(int , enum MajorColor,enum MinorColor);
void testPairToNumber(enum MajorColor, enum MinorColor, int);
void printReferenceManual();

#endif
