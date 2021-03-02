#if defined(__APPLE__)
#include "../crashhandler.hpp"
#include <fancy.hpp>

void CrashHandler::backtrace()
{
    Fancy::fancy.logTime().failure() << "Backtrace is not available on macOS" << std::endl;
}
#endif