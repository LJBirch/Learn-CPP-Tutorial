#include <iostream>

#define ENABLE_DEBUG // Comment out to disable debugging.

int main()
{
	// To mitigate some of the issues describe previously, we can do the following:

	// Conditionalizing your debugging code.
#ifdef ENABLE_DEBUG
std::cerr << "main() called\n";
#endif

	// This allows use enable/disable debugging by commenting or uncommenting #define ENABLE_DEBUG.
	// In a multi-file project, this could be placed in a header file that is then propagated to all files.

	// Use a logger.
	// A logger sends your debugging information to a log file.
	// A log file, normally stored on disk, is a file that records events that occur in software in a process called logging.
	// This is advantageous because the information written to the log fle is separated from your program's output, avoiding clutter.
	// An example of third-party library that does this, is plog logger.

	return 0;
}