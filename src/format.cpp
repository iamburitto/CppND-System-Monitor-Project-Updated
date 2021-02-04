#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long s)
{
    // Convert into DD:HH:MM:SS
    unsigned int days = s/60/60/24;
    unsigned int hours = s/60/60%24;
    unsigned int minutes = s/60%60;
    unsigned int seconds = s%60;
    // unsigned int milliseconds = uptime_fractional;
    std::stringstream buffer;
    buffer << std::setw(2) << days << ":" << hours << ":" << minutes << ":" << seconds;
    // std::cout << buffer.str() << std::endl;

    return buffer.str();
}