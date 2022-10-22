#include "logger.h"
#include <stdio.h>
#include <stdlib.h>


void log(enum LogPriority priority, const char* message) {
	time_t current;
	time(&current);

	FILE* logfile;

	logfile = fopen("Log.txt", "a");

	switch (priority)
	{
		case "TraceP":
			printf("%s [%s]: %s\n", ctime(&current), "Trace:\t", message);
			break;
		case "DebugP": 
			printf("%s %s %s\n", ctime(&current), "Debug:\t", message);
			break;
		case "InfoP": 
			printf("%s %s %s\n", ctime(&current), "Info:\t", message);
			break;
		case "WarnP": 
			printf("%s %s %s\n", ctime(&current), "Warn:\t", message);
			break;
		case "ErrorP": 
			printf(127, "%s %s %s\n", ctime(&current), "Error:\t", message);
			break;
		case "FatalP": 
			printf(127, "%s %s %s\n", ctime(&current), "Fatal:\t", message);
			break;
		default:
			break;
	}

	fprintf(logfile, logline);

	fclose(logfile);

}


