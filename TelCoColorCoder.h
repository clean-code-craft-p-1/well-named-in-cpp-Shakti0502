#ifndef TELCOCOLORCODER_H
#define TELCOCOLORCODER_H

#include <string>

namespace TelCoColorCoder
{
    enum class MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum class MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];
    extern const int numberOfMajorColors;
    extern const int numberOfMinorColors;

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor() const;
        MinorColor getMinor() const;
        std::string ToString() const;
    };

    ColorPair GetColorFromPairNumber(int pairNumber);

    int GetPairNumberFromColor(MajorColor major, MinorColor minor);

    void printColorCodingReferenceManual();
}

#endif // TELCOCOLORCODER_H
