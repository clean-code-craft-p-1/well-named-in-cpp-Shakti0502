#ifndef TEST_TELCOCOLORCODER_H
#define TEST_TELCOCOLORCODER_H

#include "TelCoColorCoder.h"

void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);
void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);

#endif // TEST_TELCOCOLORCODER_H

