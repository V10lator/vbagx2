/****************************************************************************
 * Visual Boy Advance GX
 *
 * Tantric September 2008
 *
 * fileop.h
 *
 * FAT File operations
 ****************************************************************************/

#ifndef _FATFILESC_
#define _FATFILESC_
#include <gccore.h>
#include <stdio.h>
#include <string.h>
#include <ogcsys.h>
#include <fat.h>
#include <sys/dir.h>
#include <sys/stat.h>
#include <unistd.h>

#define ROOTFATDIR "fat:/"

bool ChangeFATInterface(int method, bool silent);
int ParseFATdirectory(int method);
int LoadFATSzFile(char * filepath, unsigned char * rbuffer);
int SaveFATFile (char * sbuffer, char *filepath, int length, bool silent);
int LoadFATFile (char * sbuffer, char *filepath, int length, bool silent);

extern char currFATdir[MAXPATHLEN];
extern FILE * fatfile;

#endif
