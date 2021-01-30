# SWIGXPlatformDemo

A demo of using SWIG-generated interfaces for C# in a way that preserves cross-platform

## How I did it:
I made a cmake project that built a very simple library and C# binding with SWIG.

I copied the files over to the AmazingCounterLib .NET library, and with some conditional file copying, it's working.


## What's left:
- Stop file copying and make this CI/automation friendly.
- Actually test on other platforms.
