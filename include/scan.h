
#include "../include/tree.h"

#ifndef _SCANH_
#define _SCANH_
typedef struct sinfo ScanInfo;
struct sinfo
{
    int nr_monitorati;
    int nr_link;
    int nr_directory;
    int dim_totale;
    int dim_media;
    int dim_max;
    int dim_min;
};

extern ScanInfo scan_info;
RecordNode *readOutputFile(FILE *, RecordNode *);
void readInputFile(FILE *);
void analisiSingolaRiga(char *);
int startScan(FILE *, FILE *);
int scanFilePath(char *, int, int);

#endif