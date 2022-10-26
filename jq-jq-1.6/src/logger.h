#ifndef LOGGER_H
#define LOGGER_H

#include <time.h>
#include <fstream>
enum LogPriority {
    TraceP, DebugP, InfoP, WarnP, ErrorP, FatalP
};

static void logger(enum LogPriority priority, const char* message);






#endif /* LOG_H */