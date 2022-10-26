#include "logger.h"
#include <stdio.h>
#include <stdlib.h>


static void logger(enum LogPriority priority, const char* message) {
	time_t current;
	time(&current);

    FILE *logfile = fopen("Log.txt", "a");
	char *const logline[128];

	switch (priority)
	{
		case TraceP:
			snprintf(logline,128,"%s [%s]: %s\n", ctime(&current), "Trace:\t", message);
			printf("%s \n",logline);
			break;
		case DebugP: 
			snprintf(logline,128,"%s [%s]: %s\n", ctime(&current), "Debug:\t", message);
			printf("%s \n",logline);
			break;
		case InfoP: 
			snprintf(logline,128,"%s [%s]: %s\n", ctime(&current), "Info:\t", message);
			printf("%s \n",logline);
			break;
		case WarnP: 
			snprintf(logline,128,"%s [%s]: %s\n", ctime(&current), "Warn:\t", message);
			printf("%s \n",logline);
			break;
		case ErrorP: 
			snprintf(logline,128,"%s [%s]: %s\n", ctime(&current), "Error:\t", message);
			printf("%s \n",logline);
			break;
		case FatalP: 
			snprintf(logline,128,"%s [%s]: %s\n", ctime(&current), "Fatal:\t", message);
			printf("%s \n",logline);
			break;
		default:
			break;
	}

	fprintf(logfile, logline);

	fclose(logfile);

}


