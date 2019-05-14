#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <getopt.h>
int numeroMonitorati = 0;
int numeroLink = 0;
int numeroDirectory = 0;
int dimensioneTotale = 0;
int dimensioneMedia = 0;
int dimensioneMassima = 0;
int dimensioneMinima = 0;
int verbose_flag;
int stat_flag;
int report_flag;
int history_flag;
int user_flag;
int group_flag;
int length_flag;
int noscan_flag;

int main(int argc, char **argv)
{

    static struct option long_options[] = {
        {"verbose", no_argument, NULL, 'v'},
        {"stat", no_argument, NULL, 's'},
        {"report", no_argument, NULL, 'r'},
        {"history", required_argument, 0, 'h'},
        {"user", required_argument, 0, 'u'},
        {"group", required_argument, 0, 'g'},
        {"length", required_argument, 0, 'l'},
        {"noscan", no_argument, &noscan_flag, 1},
        {0, 0, 0, 0}};
    int c = 0;

    if (argc < 1)
    {
        return -1;
    }

    int option_index = 0;
    while (c != -1)
    {
        c = getopt_long(argc, argv, "vsrh:u:g:l:", long_options, &option_index);
        switch (c)
        {
        case 'v':
            verbose_flag = 1;
            break;
        case 's':
            stat_flag = 1;
            break;
        case 'r':
            report_flag = 1;
            break;
        case 'h':
            user_flag = 1;
            //aggiungere gestione valori
            break;
        case 'u':
            group_flag = 1;
            //aggiungere gestione valori
            break;
        case 'g':
            length_flag = 1;
            //aggiungere gestione valori
            break;
        case 'l':
            noscan_flag = 1;
            //aggiungere gestione valori
            break;
        }
    }

    if (verbose_flag)
    {
        printf("Verbose flag\n");
    }
    if (report_flag)
    {
        printf("Report flag\n");
    }
    if(stat_flag){
        printf("Stat flag\n");
    }
    /* struct stat fileStat;
    if (stat(argv[1], &fileStat) < 0)
        return 1;*/

    /*printf("Information for %s\n", argv[1]);
    printf("---------------------------\n");
    printf("File Size: \t\t%d bytes\n", fileStat.st_size);
    printf("Number of Links: \t%d\n", fileStat.st_nlink);
    printf("File inode: \t\t%d\n", fileStat.st_ino);

    printf("File Permissions: \t");
    printf((S_ISDIR(fileStat.st_mode)) ? "d" : "-");
    printf((fileStat.st_mode & S_IRUSR) ? "r" : "-");
    printf((fileStat.st_mode & S_IWUSR) ? "w" : "-");
    printf((fileStat.st_mode & S_IXUSR) ? "x" : "-");
    /* printf((fileStat.st_mode & S_IRGRP) ? "r" : "-");
    printf((fileStat.st_mode & S_IWGRP) ? "w" : "-");
    printf((fileStat.st_mode & S_IXGRP) ? "x" : "-");
    printf((fileStat.st_mode & S_IROTH) ? "r" : "-");
    printf((fileStat.st_mode & S_IWOTH) ? "w" : "-");
    printf((fileStat.st_mode & S_IXOTH) ? "x" : "-");*/
    //  printf("\n\n");

    // printf("The file %s a symbolic link\n", (S_ISLNK(fileStat.st_mode)) ? "is" : "is not");

    return 0;
}