using System;
using AmazingCounterLib;

namespace SWIGXPlatformDemoExample
{
    class Program
    {
        static void Main(string[] args)
        {
            var AC = new AmazingCounter();
            Console.WriteLine($"Starting count: {AC.tick()}");
            Console.WriteLine($"Another tick: {AC.tick()}");
            Console.WriteLine($"Another tick: {AC.tick()}");
            Console.WriteLine($"Another tick: {AC.tick()}");
            Console.WriteLine($"Another tick: {AC.tick()}");
            Console.WriteLine($"Another tick: {AC.tick()}");
            Console.WriteLine($"Another tick: {AC.tick()}");
            Console.WriteLine($"Another tick: {AC.tick()}");
        }
    }
}
