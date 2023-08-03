#include <iostream>
#include "TelCoColorCoder.h"

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    const int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    const int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    ColorPair::ColorPair(MajorColor major, MinorColor minor) :
        majorColor(major), minorColor(minor)
    {}

    MajorColor ColorPair::getMajor() const {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() const {
        return minorColor;
    }

    std::string ColorPair::ToString() const {
        std::string colorPairStr = MajorColorNames[static_cast<int>(majorColor)];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[static_cast<int>(minorColor)];
        return colorPairStr;
    }

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return static_cast<int>(major) * numberOfMinorColors + static_cast<int>(minor) + 1;
    }

    void printColorCodingReferenceManual() {
        std::cout << "Color Coding Reference Manual:" << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        std::cout << "Pair No.\tMajor Color\tMinor Color" << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
            ColorPair colorPair = GetColorFromPairNumber(pairNumber);
            std::cout << pairNumber << "\t\t"
                << MajorColorNames[static_cast<int>(colorPair.getMajor())] << "\t\t"
                << MinorColorNames[static_cast<int>(colorPair.getMinor())] << std::endl;
        }
        std::cout << "-------------------------------------" << std::endl;
    }
}
