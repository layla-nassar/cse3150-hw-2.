#ifndef GREETING_UTILS_H
#define GREETING_UTILS_H

#include <string>

namespace GreetingUtils {
    // Returns: "Hello, <name>!"
    std::string create_message(const std::string& name);

    // Allocate a new C-string on the heap that copies msg (including '\0').
    // Caller MUST free this memory with delete[].
    char* format_as_c_string(const std::string& msg);
}

#endif // GREETING_UTILS_H
