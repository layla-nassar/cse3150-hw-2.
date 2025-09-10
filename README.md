# cse3150-hw-2.
CSE3150 Homework 2: Greeting Formatter

Instructions: 
1. Project Structure: Organize your files into two directories: • include/: Stores your header file (.h).
• src/: Stores your C++ source files (.cpp).
2. GreetingUtils Namespace: Create a namespace called GreetingUtils. Its function declarations
should be in include/greeting utils.h and definitions in src/greeting utils.cpp.
• Remember to use header guards in greeting utils.h!
• Create a function: std::string create message(const std::string& name);. This function should take a person’s name and return a greeting string, for example, ”Hello, <name>!”.
• Create a second function: char* format as c string(const std::string& msg);. This func- tion must:
(a) Take a constant string reference as input.
(b) Dynamically allocate a char array on the heap that is large enough to hold the entire
message, plus a null terminator.
(c) Copy the characters from the std::string into the new char array.
(d) Add the null terminator ‘\0‘ at the end of the char array.
(e) Return the pointer to the new heap-allocated char array.
3. main.cpp: In src/main.cpp, write a program that:
• Prompts the user to enter their name using std::cout.
• Reads the full line of input using std::getline.
• Calls your GreetingUtils::create message function to generate the greeting.
• Passes that greeting to your GreetingUtils::format as c string function to get the dynami- cally allocated C-style string.
• Prints the greeting message to the console from the returned char* pointer.
• CRITICAL: Frees the heap-allocated memory using delete[].
4. Submission:
• Create a new public GitHub repository named cse3150 hw 2.
• Add a .gitignore file to exclude your executable (greeter) and any object files (*.o). • Push your organized code (include/, src/).
