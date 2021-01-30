#pragma once

// Windows doesn't like exporting stuff...
#ifdef _MSC_VER
#ifdef AMAZING_COUNTER_CPP_EXPORTS
#define AMAZING_COUNTER_CPP_API __declspec(dllexport)
#else
#define AMAZING_COUNTER_CPP_API __declspec(dllimport)
#endif
#else
#define AMAZING_COUNTER_CPP_API
#endif

namespace AmazingCounterLib
{

class AMAZING_COUNTER_CPP_API AmazingCounter
{
  private:
    size_t counter_;

  public:
    AmazingCounter();
    size_t tick();
};

} // namespace AmazingCounterLib
