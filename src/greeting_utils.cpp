#include "greeting_utils.h"
#include <cstring> // for std::memcpy

namespace GreetingUtils {

    std::string create_message(const std::string& name) {
        return "Hello, " + name + "!";
    }

    char* format_as_c_string(const std::string& msg) {
        std::size_t n = msg.size();
        char* buf = new char[n + 1];   // allocate +1 for null terminator
        std::memcpy(buf, msg.c_str(), n);
        buf[n] = '\0';                 // add null terminator
        return buf;                    // caller must delete[]
    }

}
