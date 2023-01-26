#ifndef __FILEH__
#define __FILEH__

#include <sys/time.h>

typedef struct {
    struct timeval startTime;
    struct timeval endTime;
} Timer;

void startTime(Timer* timer);
void stopTime(Timer* timer);
float elapsedTime(Timer timer);

void loadCSV(const std::string& filename, std::vector<double>& values);

void verifyResults(double* computed, double* actual, unsigned int count);

#define FATAL(msg, ...) \
    do {\
        fprintf(stderr, "[%s:%d] "msg"\n", __FILE__, __LINE__, ##__VA_ARGS__);\
        exit(-1);\
    } while(0)

#endif
