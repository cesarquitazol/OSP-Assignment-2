#ifndef LOGGER_H
#define LOGGER_H

#include <time.h>
#include <fstream>

void logger(const char* tag, const char* message);


enum LogPriority {
    TraceP, DebugP, InfoP, WarnP, ErrorP, FatalP
};



#endif /* LOG_H */