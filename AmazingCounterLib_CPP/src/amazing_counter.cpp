#define AMAZING_COUNTER_CPP_EXPORTS

#include "amazing_counter/amazing_counter.h"

using namespace AmazingCounterLib;

AmazingCounter::AmazingCounter()
{
    counter_ = 0;
}

size_t AmazingCounter::tick()
{
    return counter_++;
}
